#include <stdio.h>

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

void displayMenu() {
    printf("\n====================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("====================================\n");
    printf("1. Calculate VAT\n");[cite: 97]
    printf("2. Calculate Salary\n");[cite: 97]
    printf("3. Calculate Budget\n");[cite: 97]
    printf("4. Exit\n");[cite: 97]
    printf("Enter choice: ");[cite: 97]
}

int main() {
    int choice;
    float amount, basic, housing, transport, revenue, expenses;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount for VAT: ");
                scanf("%f", &amount);
                printf("VAT (15%): %.2f\n", calculateVAT(amount));[cite: 97]
                break;
            case 2:
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);
                printf("Gross Salary: %.2f\n", calculateSalary(basic, housing, transport));[cite: 97]
                break;
            case 3:
                printf("Enter total revenue: ");
                scanf("%f", &revenue);
                printf("Enter total expenses: ");
                scanf("%f", &expenses);
                float balance = calculateBudget(revenue, expenses);
                if (balance > 0) {
                    printf("SURPLUS: %.2f\n", balance);[cite: 97]
                } else if (balance < 0) {
                    printf("DEFICIT: %.2f\n", -balance);[cite: 97]
                } else {
                    printf("BALANCED BUDGET\n");[cite: 97]
                }
                break;
            case 4:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);

    return 0;
}