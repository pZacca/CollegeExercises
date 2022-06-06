/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Ternary operators in Macros use. Definition directives with parameters (inline functions)
*/

// Preprocessing directives
#include <stdio.h>
#define MAX(x, y) ( (x) > (y) ? (x) : (y) )
#define MIN(x, y) ( (x) < (y) ? (x) : (y) )

// Main function
int main(void) {
    int x, y;
    x = 10;
    y = 30;
    printf("\nLargest = %d\nSmallest = %d\n", MAX(x, y), MIN(x, y));

    return 0;
}
