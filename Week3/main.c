#include <stdio.h>

int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    printf("EMPLOYEE SALARY CALCULATOR\n");
    printf("--------------------------\n");

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    printf("Enter tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;[cite: 60]
    netSalary = grossSalary - tax;[cite: 60]

    printf("\n--------------------------\n");
    printf("SALARY SUMMARY\n");
    printf("--------------------------\n");
    printf("Gross Salary: %.2f\n", grossSalary);[cite: 60]
    printf("Net Salary: %.2f\n", netSalary);[cite: 60]
    printf("--------------------------\n");

    return 0;
}