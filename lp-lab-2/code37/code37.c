/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Calculates simple arithmetic expressions ( + , - , * , / ).
        Expression must be given by the user, e.g. 4+5
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    float num1, num2;
    char operator;
    printf("\nEnter an arithmetic expression (-, +, * or /, e.g. 3+9): \n");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch(operator){
        case '+':
            printf("\nAddition = %f", num1 + num2);
            break;

        case '-':
            printf("\nSubtraction = %f", num1 - num2);
            break;

        case '*':
            printf("\nMultiplication = %f", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("\nDivision = %f", num1 / num2);
            else
                printf("\nYou can't divide a number by 0.");
            break;

        default:
            printf("\nUnavailable expression.");
    }

    return 0;
}
