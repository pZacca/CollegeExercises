/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Prints a regressive counting given by the user
    (1/3) do
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

    do{
        printf("\n%d", num);
        num--;
    } while (num > 0);

    return 0;
}
