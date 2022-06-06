/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Verifies if a given number is prime.
    (3/3) for
 */

// Preprocessing directives
#include <stdio.h>
#include <stdbool.h>

// Functions prototypes
bool isPrime(int value);

// Main function
int main(void){
    int num;
    // Input validation (num > 0)
    printf("\nInsert the value of num:\n");
    while (1) {
        scanf("%d", &num);
        if (num > 0) break;
        printf("\nPlease enter a value greater than zero:\n");
    }

    isPrime(num) ? printf("Is prime.") : printf("Isn't prime.");

    return 0;
}

// Other functions
bool isPrime(int value) {
    int i, aux = 0;

    for (i = 1; i < value;) {
        if (value % i == 0)
            aux++;

        if (aux > 1)
            return 0;

        i += 2;
    }

    return (aux == 1) ? 1 : 0;
}
