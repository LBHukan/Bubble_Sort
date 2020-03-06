#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define vetor 100 /* tamanho do vetor */

void BubbleSort(int vet[]);

void main(){
    int range = 100000; /* range de numeros aleatorios*/
    int vet[vetor] = { 0 }; /* vetor preenchido com valor 0 */

    srand(time(NULL)); /* usar biblioteca time para gerar numero aleatorio */

    for(int i = 0; i < vetor; i++){  /* laco de repeicao para preencher vetor obs; trocar valor  */
        vet[i] = rand() % range;
    }


    printf("Lista nao Ordenada\n"); /* laco para mostrar linsta */
    for(int j = 0; j < vetor; j++){
        printf("%d\n", vet[j]);
    }

    printf("Lista Ordenada\n");

    BubbleSort(vet);

    for(int i = 0;i < vetor; i++)
        printf("%d\n", vet[i]);


    return 0;

}

void BubbleSort(int vet[]){
    int aux;
    for(int i = 0; i < vetor; i++){
        for(int j = i; j < vetor; j++){ /* lacos para fazer bubble sort e ordenar numeros*/
            if(vet[i] > vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
}
