/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: testing break function
 */

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    int i;
    for (i = 0; i < 10; i++){
        if (i == 5)
            break;
        printf("\n%d", i);
    }

    printf("\nEnd.");

    return 0;
}
