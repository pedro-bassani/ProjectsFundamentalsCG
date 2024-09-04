#include <stdio.h>

int main() {

    char question[100] = "Qual é o verdadeiro nome do super-herói Batman?";
    char alternative1[50] = "a) Bruce Wayne";
    char alternative2[50] = "b) Clark Kent";
    char alternative3[50] = "c) Peter Parker";
    char alternative4[50] = "d) Tony Stark";
    char alternative5[50] = "e) Steve Rogers";
    char correctAnswer = 'a';  
    char userAnswer;

    printf("%s\n", question);
    printf("%s\n", alternative1);
    printf("%s\n", alternative2);
    printf("%s\n", alternative3);
    printf("%s\n", alternative4);
    printf("%s\n", alternative5);

    printf("Digite a letra correspondente à sua resposta: ");
    scanf(" %c", &userAnswer);  

    printf("Você respondeu alternativa %c. A resposta correta é a alternativa %c.\n", userAnswer, correctAnswer);

    return 0;
}
