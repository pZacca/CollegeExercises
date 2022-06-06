/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Prints readjusted wage according to the following conditions:
        if wage <= 1045.00 -> +30%
        if wage > 1045.00 and < 2090.00 -> +25%
        if wage > 2090.00 -> +20%

*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    float wage;
    // Input validation (wage > 0)
    printf("\nPlease enter the value of the wage (R$):\n");
    while (1) {
        scanf("%f", &wage);
        if (wage > 0) break;
        printf("\nPlease enter a greater than zero value:\n");
    }

    if (wage <= 1045.00)
        wage *= 1.3;
    else if (wage < 2090.00)
        wage *= 1.25;
    else
        wage *= 1.2;

    printf("\nReadjusted wage: R$%.2f\n", wage);

    return 0;
}
