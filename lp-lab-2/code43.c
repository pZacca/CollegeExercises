/*
 Matrícula - [hidden]
 Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
 Curso - Bacharelado em Ciência e Tecnologia
 Semestre - 1º
*/

// Preprocessing directives
#include <stdio.h>
#include <math.h>

/*
 PT-BR
Programa que imprime todos os números quadrados perfeitos de um intervalo informado pelo usuário.
Números quadrados perfeitos são números cuja raiz quadrada resultam em um valor inteiro.

 EN
Program that prints all the perfect square numbers of an interval entered by the user.
Perfect square numbers are numbers whose square root results in an integer value.
 */

// Main function
int main(void) {
    int begin, end, beginRoot, i;
    // Bigger than zero validation
    printf("\nInsert the lowest interval number: ");
    while (1) {
        scanf("%d", &begin);
        if (begin > 0)
            break;
        printf("\nPlease insert a value bigger than zero: ");
    }

    printf("\nInsert the value of the highest interval number: ");
    while (1) {
        scanf("%d", &end);
        if (end > 0 && end > begin)
            break;
        printf("\nPlease insert a value bigger than zero and bigger than the first one: ");
    }

    beginRoot = ceil(sqrt(begin));
    for (i = beginRoot; (i * i) <= end; i++){
        printf("\n%d", i * i);
    }

    return 0;
}
