#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

void updateSalary(Employee *e, double newSalary) {
    e->salary = newSalary;
}

void swapSalaries(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    Employee emp = {1001, "Maria", 18500.50};

    printf("Before update: %s earns N$%.2f\n", emp.name, emp.salary);
    
    updateSalary(&emp, 22000.00);
    
    printf("After update: %s earns N$%.2f\n", emp.name, emp.salary);

    double sal1 = 15000.00, sal2 = 30000.00;
    printf("\nBefore swap: A = N$%.2f, B = N$%.2f\n", sal1, sal2);
    swapSalaries(&sal1, &sal2);
    printf("After swap: A = N$%.2f, B = N$%.2f\n", sal1, sal2);

    return 0;
}