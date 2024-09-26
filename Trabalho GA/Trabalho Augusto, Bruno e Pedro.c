#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h> //time()

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

            printf("Ciclo %d: Populacao = %d\n", i, novaPop);

        }

        //printf("Simulação do Crescimento:\n ");
        

    } else if (opcao == dois) {
         printf("Programa encerrado!");

    }
    
    return 0;
}