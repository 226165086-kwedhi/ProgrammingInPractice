#include <stdio.h>
#include "utilities.h"
#include "employees.h"
#include "budget.h"
#include "reports.h"

int main(void) {
    displayHeader();
    addEmployee();
    listEmployees();
    processBudget();
    generateSummaryReport();
    return 0;
}