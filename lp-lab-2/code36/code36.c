/*
    Matricula - [hidden]
    Nome completo - Pedro Henrique Castro Zaccaria Rodrigues
    Curso - Bacharelado em Ciencia e Tecnologia
    Semestre - 1.

    Exercise: Given a vote by the user, prints the user's vote.
        1 and 2 -> A and B candidates
        3 -> none of the above
        others -> spoilt vote
*/

// Preprocessing directives
#include <stdio.h>

// Main function
int main(void) {
    int vote;
    printf("\nEnter your vote: "
           "\n| 1 | A Candidate"
           "\n| 2 | B Candidate"
           "\n| 3 | None of the above"
           "\n|   | Spoilt vote\n");
    scanf("%d", &vote);
    switch(vote){
        case 1:
            printf("\nVoted for candidate A.");
            break;

        case 2:
            printf("\nVoted for candidate B.");
            break;

        case 3:
            printf("\nVoted for none of the above.");
            break;

        default:
            printf("\nSpoilt vote.");
    }

    return 0;
}
