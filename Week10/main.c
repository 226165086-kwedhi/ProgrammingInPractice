#include <stdio.h>
#include <stdlib.h>

void saveEmployeeData(int id, const char *name, double salary) {
    FILE *fp = fopen("employees.txt", "a");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }
    fprintf(fp, "%d %s %.2f\n", id, name, salary);
    fclose(fp);
    printf("Record saved successfully to employees.txt\n");
}

void loadEmployeeData(void) {
    FILE *fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("No existing data file found (employees.txt). Starting fresh.\n");
        return;
    }

    int id;
    char name[50];
    double salary;

    printf("\n--- Loaded Records from File ---\n");
    while (fscanf(fp, "%d %49s %lf", &id, name, &salary) == 3) {
        printf("ID: %d | Name: %s | Salary: N$%.2f\n", id, name, salary);
    }
    fclose(fp);
}

int main(void) {
    int choice;
    do {
        printf("\n--- MFMS FILE HANDLING MENU ---\n");
        printf("1. Save New Employee Record\n");
        printf("2. Load and Display All Records\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int id;
            char name[50];
            double salary;
            printf("Enter ID: ");
            scanf("%d", &id);
            printf("Enter Name (one word): ");
            scanf("%49s", name);
            printf("Enter Salary: ");
            scanf("%lf", &salary);
            saveEmployeeData(id, name, salary);
        } else if (choice == 2) {
            loadEmployeeData();
        }
    } while (choice != 3);

    return 0;
}