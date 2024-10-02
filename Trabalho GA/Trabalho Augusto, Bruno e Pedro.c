#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h> //time()
#include <stdbool.h> 

int main () {

    int um = 1; 
    int dois = 2;
    int opcao, bac, ciclo;
    float taxa = 0;
    float novaPop;
    
    printf("Menu Inicial:\t \n ");
    printf("1 - Nova Simulação\n ");
    printf("2 - Sair do Programa\n ");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    if (opcao == um) {
        printf("População inicial: \n ");
        scanf("%d", &bac);

        printf("Taxa de crescimento:\n ");
        scanf("%f", &taxa);

        novaPop = bac + (bac * taxa / 100);
        
        printf("Número de ciclos:\n ");
        scanf("%d", &ciclo);

        for (int i = 1; i <= ciclo; i++) {

            int random = rand() % 100 + 1;

            if (random <= 20) {
                novaPop -= novaPop * 0.3;
                printf("Ciclo %d: População = %.2f (condição adversa: Alta Temperatura!)\n", i, novaPop);

            } else if (random <= 35) {
                novaPop -= novaPop * 0.25;
                printf("Ciclo %d: População = %.2f (condição adversa: Falta de Nutrientes!)\n", i, novaPop);

            } else if (random <= 45) {
                novaPop -= novaPop * 0.2;
                printf("Ciclo %d: População = %.2f (condição adversa: Excesso de Umidade!)\n", i, novaPop);

            } else if (random <= 50) {
                novaPop -= novaPop * 0.5;
                printf("Ciclo %d: População = %.2f (condição adversa: Radiação Ultravioleta!)\n", i, novaPop);

            } else if (novaPop <= 0) {
                printf("A população morreu e que a simulação não pôde continuar!");
            
            } else {
                novaPop += novaPop * taxa;
                printf("Ciclo %d: População = %.2f\n", i, novaPop);

            }
            
        }

        printf("Simulação concluída. População final: %.2f\n", novaPop);
        
    } else if (opcao == dois) {
         printf("Programa encerrado!");

    }
    
    return 0;
}
