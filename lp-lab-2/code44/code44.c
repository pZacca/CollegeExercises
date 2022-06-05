/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

 Exercise: Write an algorithm that reads a positive integer value (n) that will be used to calculate and print K.
 K = 1 + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! + ... + 1/n!

 */

// Preprocessing directives
#include <stdio.h>

// Functions prototypes
int factorial(int value);

// Main function
int main(void) {
    int n, k;
    double results = 1.0;
    // Input validation (n > 0)
    printf("\nInsert the value of n: ");
    while (1) {
        scanf("%d", &n);
        if (n > 0) break;
        printf("\nPlease insert a value bigger than zero: ");
    }

    // Sum of inverse factorials
    for (k = 1; k <= n; k++){
        results += 1.0 / factorial(k);
    }

    // Output
    printf("\nK = %f", results);

    return 0;
}

// Other functions
int factorial(int value){
    int i;
    for (i = value - 1; i > 1; i--){
        value *= i;
    }

    return value;
}