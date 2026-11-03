#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

int main(void) {
    int capacity = 2;
    int count = 0;
    
    Employee *staff = malloc(capacity * sizeof(Employee));
    if (staff == NULL) {
        printf("Out of memory!\n");
        return 1;
    }

    int id;
    char name[30];
    double salary;

    printf("--- Enter Employees (Enter ID 0 to stop) ---\n");
    while (1) {
        printf("Employee ID: ");
        scanf("%d", &id);
        if (id == 0) break;

        printf("Name: ");
        scanf("%29s", name);
        printf("Salary: ");
        scanf("%lf", &salary);

        if (count == capacity) {
            capacity *= 2;
            Employee *bigger = realloc(staff, capacity * sizeof(Employee));
            if (bigger == NULL) {
                printf("Allocation failed during resize!\n");
                free(staff);
                return 1;
            }
            staff = bigger;
            printf("[System Notice] Array capacity expanded to %d slots\n", capacity);
        }

        staff[count].id = id;
        strcpy(staff[count].name, name);
        staff[count].salary = salary;
        count++;
    }

    printf("\n--- Final Employee Registry ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Salary: N$%.2f\n", staff[i].id, staff[i].name, staff[i].salary);
    }
    printf("Total Stored: %d | Final Capacity: %d\n", count, capacity);

    free(staff);
    staff = NULL;

    return 0;
}