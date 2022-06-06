/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Prints ASCII code of a vowel given by the user (A, E, I or U)
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    char vowel;
    int ASCII;
    printf("\nEnter your vowel: A, E, I, O ou U: \n");
    scanf("%c", &vowel);
    ASCII = (vowel == 'A') ? 65 :
            (vowel == 'E') ? 69 :
            (vowel == 'I') ? 73 :
            (vowel == 'O') ? 79 :
            (vowel == 'U') ? 85 : -1;

    ASCII != (-1) ? printf("%c's ASCII is %d.\n", vowel, ASCII) :
                    printf("%c's ASCII isn't available.\n", vowel);

    return 0;
}
