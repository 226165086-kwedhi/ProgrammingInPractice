#include <stdio.h>

// Function Prototypes
void displayMenu(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);

int main(void) {
    int choice;
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int size = 5;

    do {
        displayMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            break;
        }

        switch (choice) {
            case 1: {
                float amt;
                printf("Enter amount for VAT calculation: ");
                scanf("%f", &amt);
                printf("VAT (15%): N$%.2f\n", calculateVAT(amt));
                break;
            }
            case 2: {
                float basic, housing, transport;
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);
                printf("Gross Salary: N$%.2f\n", calculateSalary(basic, housing, transport));
                break;
            }
            case 3: {
                float rev, exp;
                printf("Enter total revenue: ");
                scanf("%f", &rev);
                printf("Enter total expenses: ");
                scanf("%f", &exp);
                float balance = calculateBudget(rev, exp);
                printf("Budget Balance: N$%.2f ", balance);
                if (balance > 0) printf("(SURPLUS)\n");
                else if (balance < 0) printf("(DEFICIT)\n");
                else printf("(BALANCED)\n");
                break;
            }
            case 4: {
                int searchID;
                printf("Enter employee ID to search (101-105): ");
                scanf("%d", &searchID);
                int pos = searchEmployee(searchID, employeeIDs, size);
                if (pos != -1) {
                    printf("Employee found at array position %d\n", pos);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            }
            case 5:
                printf("Exiting MFMS. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select 1-5.\n");
        }
    } while (choice != 5);

    return 0;
}

void displayMenu(void) {
    printf("\n=========================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM   \n");
    printf("=========================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget Balance\n");
    printf("4. Search Employee ID\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

float calculateVAT(float amount) {
    return amount * 0.15f;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int searchEmployee(int employeeID, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == employeeID) {
            return i;
        }
    }
    return -1;
}