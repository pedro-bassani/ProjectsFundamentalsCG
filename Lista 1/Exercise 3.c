#include <stdio.h>

int main() {
    char correctAnswer = 'a';
    char userAnswer;

    printf("Qual é o verdadeiro nome do super-herói Batman?\n");

    printf(" a) Bruce Wayne\n");
    printf(" b) Clark Kent\n");
    printf(" c) Peter Parker\n");
    printf(" d) Tony Stark\n");
    printf(" e) Steve Rogers\n");

    printf("Digite a letra correspondente à sua resposta: ");
    scanf(" %c", &userAnswer); 

    printf("Você respondeu alternativa %c. A resposta correta é a alternativa %c.\n", userAnswer, correctAnswer);

    return 0;
}