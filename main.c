#include <stdio.h>

int main()
{
<<<<<<< HEAD
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf("%49s", municipality);

    printf("Enter Mayor: ");
    scanf("%49s", mayor);
=======
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
>>>>>>> 088f6e38152cf67327bbe93a8ce2a8bed4085bdd

    printf("Enter Population: ");
    scanf("%d", &population);

<<<<<<< HEAD
    printf("\n-------------------------\n");
    printf("Municipal Report Summary\n");
    printf("-------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);
    printf("-------------------------\n");
=======
    printf("\n\n------ Municipality Report ------\n");
    printf("Municipality Name : %s\n", municipalityName);
    printf("Mayor's Name      : %s\n", mayorName);
    printf("Population        : %d\n", population);
>>>>>>> 088f6e38152cf67327bbe93a8ce2a8bed4085bdd

    return 0;
}