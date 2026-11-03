#include <stdio.h>

int main() {
    float salary;
    float total = 0;
    float highest = 0;
    float lowest = 0;
    float average;
    int n = 5;

    printf("MUNICIPAL EMPLOYEE SALARY ANALYSIS\n");
    printf("----------------------------------\n");

    for (int i = 1; i <= n; i++) {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);
        
        total = total + salary;

        if (i == 1) {
            highest = salary;
            lowest = salary;
        }
        if (salary > highest) {
            highest = salary;
        }
        if (salary < lowest) {
            lowest = salary;
        }
    }

    average = total / n;

    printf("\n--- Salary Report ---\n");
    printf("Average salary: %.2f\n", average);[cite: 114]
    printf("Highest salary: %.2f\n", highest);[cite: 114]
    printf("Lowest salary: %.2f\n", lowest);[cite: 114]
    printf("---------------------\n");

    return 0;
}