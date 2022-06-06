/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Classifies a triangle as equilateral, isoceles or scalene.
*/

// Preprocessing directives
#include <stdio.h>
#include <stdbool.h>

// Functions prototypes


// Main function
int main() {
    float a, b, c;
    while (1){
        printf("\nEnter the A, B and C sides of the triangle: \n");
        scanf("%f %f %f", &a, &b, &c);
        bool isntPythagorean = a > (b+c) || b > (a+c) || c > (a+b);
        bool isntBiggerThanZero = a <= 0 || b <= 0 || c <= 0;
        if ( isntPythagorean || isntBiggerThanZero ) {
            printf("\nPlease enter valid sides, these don't form a triangle.");
        } else break;
    }

    if (a == b && b == c)
        printf("\nEquilateral triangle.\n");
    else if (a == b || b == c || c == a)
        printf("\nIsoceles triangle.\n");
    else
        printf("\nScalene triangle.\n");

    return 0;
}
