#include <stdio.h>

int main()
{
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    printf("TENDER EVALUATION SYSTEM\n");
    printf("------------------------\n");

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);[cite: 67]

    printf("Enter tender price: ");
    scanf("%f", &price);[cite: 67]

    printf("Enter available budget: ");
    scanf("%f", &budget);[cite: 67]

    printf("Is supplier registered? (1 = Yes, 0 = No): ");
    scanf("%d", &registered);[cite: 67]

    printf("Are all documents complete? (1 = Yes, 0 = No): ");
    scanf("%d", &documentsComplete);[cite: 67]

    printf("\n-------------------------\n");
    printf("Supplier: %s\n", supplierName);[cite: 67]

    if (registered == 1 && documentsComplete == 1 && price <= budget)[cite: 69]
    {
        printf("Status: Qualified\n");[cite: 69]
    }
    else
    {
        printf("Status: Disqualified\n");[cite: 67]
    }
    printf("-------------------------\n");

    return 0;
}