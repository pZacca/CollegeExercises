/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Calculates BMI (Body Mass Index)
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main()
{
    float bmi, weight, height;

    // Input validation
    printf("\nEnter the values of weight (kg) and height (m):\n");
    while (1) {
        scanf("%f %f", &weight, &height);
        if (weight > 0 || height > 0) break;
        printf("\nPlease enter greater than zero values:\n");
    }

    bmi = weight / (height * height);
    printf("\nYour BMI is %.2f, that's ", bmi);
    (bmi < 18.5) ? printf("underweight") :
    (bmi >= 18.5 && bmi <= 24.9) ? printf("normal.") :
    (bmi >= 25.0 && bmi <= 29.9) ? printf("overweight.") :
    (bmi >= 30.0 && bmi <= 34.9) ? printf("obese (class I.") :
    (bmi >= 35.0 && bmi <= 39.9) ? printf("obese (class II).") :
    printf("obese (class III).");

    return 0;
}
