/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Sum of all odd numbers that are multiples of 3 within the user's range
*/

// Preprocessing directives
#include <stdio.h>
#include <stdbool.h>

// Main function
int main(void) {
    int min, max, sum;
    // Input validation (min && max) > 0
    printf("\nInsert the value of min and max:\n");
    while (1) {
        scanf("%d %d", &min, &max);
        if (min > 0 && max >0) break;
        printf("\nPlease enter values greater than zero:\n");
    }

    for (sum = 0; min < max; min++){
        bool isMultipleOfThree = min % 3 == 0;
        bool isOdd = min % 2 == 1;
        if (isMultipleOfThree && isOdd)
            sum += min;
    }

    printf("The sum is: %d", sum);

    return 0;
}
