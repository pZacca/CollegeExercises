/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Calculates the ideal weight using ternary operators.
    Men Ideal Weight = (72.7 * h) - 58
    Women Ideal Weight = (62.1 * h) - 44.7
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    float height, weight;
    int sex;

    while(1) {
        printf("\nChoose your sex: "
               "\n| 1 | Male"
               "\n| 2 | Female\n");
        scanf("%d", &sex);
        if(sex != 1 && sex != 2){
            printf("\nPlease enter a valid option");
        } else break;
    }

    // Input validation
    printf("\nPlease enter your height (m):\n");
    while (1) {
        scanf("%f", &height);
        if (height > 0) break;
        printf("\nPlease enter a greater than zero value:\n");
    }

    printf("Ideal weight: %.2fkg", (sex == 1) ? 72.7 * height - 58 : 62.1 * height - 44.7);

    return 0;
}
