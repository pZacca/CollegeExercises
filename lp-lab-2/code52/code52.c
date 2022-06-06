/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Verifies if a given number is prime.
    (1/3) do
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
bool isPrime(int value){
    int i = 1, aux = 0;
    do {
        if (value % i == 0)
            aux++;

        if (aux > 2)
            return 0;

        i++;
    } while (i <= value);

    return (aux == 2) ? 1 : 0;
}
