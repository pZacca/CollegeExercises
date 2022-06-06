/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Prints all prime numbers within a range of two numbers given by the user
*/

// Preprocessing directives
#include <stdio.h>
#include <stdbool.h>

// Functions prototypes
bool isPrime(int value);

// Main function
int main(void) {
    int min, max, i;
    // Input validation (min && max) > 0
    printf("\nInsert the value of min and max:\n");
    while (1) {
        scanf("%d %d", &min, &max);
        if (min > 0 && max >0) break;
        printf("\nPlease enter values greater than zero:\n");
    }

    // If the user enters a minimum greater than the maximum, their values are swapped so the algorithm works well.
    if (min > max){
        int aux;
        aux = max;
        max = min;
        min = aux;
    }

    for (i = min; i <= max; i++){
        if (isPrime(i))
            printf("\n%d", i);
    }

    return 0;
}

// Other functions
bool isPrime(int value){
    int i, aux = 1;
    if(value == 1)
        return aux;

    for (i = (value - 1); i > 1; i--){
        if (value % i == 0) {
            aux = 0;
            break;
        }
    }

    return aux;
}
