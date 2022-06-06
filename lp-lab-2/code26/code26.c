/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Verifies if the year given by the user is a leap year
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    int year;
    // Input validation (year > 0)
    printf("\nInsert the value of year:\n");
    while (1) {
        scanf("%d", &year);
        if (year > 0) break;
        printf("\nPlease enter a year greater than zero:\n");
    }

    if (year % 100 == 0 && year % 400 != 0)
        printf("\nNot a leap year.");
    else if (year % 4 == 0)
        printf("\nIt's a leap year.");
    else
        printf("\nNot a leap year.");

    return 0;
}
