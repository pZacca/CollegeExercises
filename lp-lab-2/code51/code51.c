/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Prints a regressive counting given by the user
    (3/3) for
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

    for (;num > 0; num--)
        printf("\n%d", num);

    return 0;
}
