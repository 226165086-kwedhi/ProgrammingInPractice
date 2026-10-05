#include <stdio.h>

int main()
{
    char municipalityName[50];
    char mayorName[50];
    int population;

    printf("=====================================\n");
    printf("Municipal Financial Management System\n");
    printf("=====================================\n\n");

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf(" %[^\n]", municipalityName);

    printf("Enter Mayor's Name: ");
    scanf(" %[^\n]", mayorName);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n\n------ Municipality Report ------\n");
    printf("Municipality Name : %s\n", municipalityName);
    printf("Mayor's Name      : %s\n", mayorName);
    printf("Population        : %d\n", population);

    return 0;
}