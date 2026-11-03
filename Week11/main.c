#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int id;
    char name[30];
    char department[20];
    double salary;
    Date hireDate;
} Employee;

int main(void) {
    Employee staff[3] = {
        {1001, "Maria", "Finance", 18500.50, {15, 3, 2022}},
        {1002, "Simon", "IT", 17200.00, {10, 6, 2023}},
        {1003, "Anna", "HR", 21000.75, {1, 11, 2021}}
    };

    printf("%-6s %-10s %-12s %-12s %-12s\n", "ID", "Name", "Department", "Salary", "Hired Date");
    printf("-----------------------------------------------------------\n");
    
    double totalPayroll = 0.0;
    for (int i = 0; i < 3; i++) {
        printf("%-6d %-10s %-12s N$%-10.2f %02d/%02d/%d\n",
            staff[i].id,
            staff[i].name,
            staff[i].department,
            staff[i].salary,
            staff[i].hireDate.day,
            staff[i].hireDate.month,
            staff[i].hireDate.year
        );
        totalPayroll += staff[i].salary;
    }

    printf("\nTotal Department Payroll: N$%.2f\n", totalPayroll);
    return 0;
}