/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Checks if number is odd or even
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    int num;
    // Input validation (num > 0)
    printf("\nInsert the value of num:\n");
    while (1) {
        scanf("%d", &num);
        if (num > 0) break;
        printf("\nPlease enter a value greater than zero:\n");
    }

    printf("\nNumber %d is %s",num, (num % 2) == 0 ? "even" : "odd");

    return 0;
}
