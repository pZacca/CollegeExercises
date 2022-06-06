/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Verifies the temperature (C) given by the user
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    float temperature;
    printf("\nEnter the temperature (C): \n");
    scanf("%f", &temperature);
    if (temperature < 10)
        printf("\nToo cold temperature");
    else if (temperature < 20)
        printf("\nCold temperature");
    else if (temperature < 30)
        printf("\nCool temperature");
    else
        printf("\nToo hot temperature\n");

    return 0;
}
