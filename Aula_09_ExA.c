#include <stdio.h>
#include <stdlib.h>
#include "include/VetoresC.h"

long int somavet(int*a,int qtde){
    if (qtde == 0) return 0;
    return a[qtde-1] + somavet(a,qtde-1);
}
int main(){
    int i;
    printf("Digite o tamanho do vetor\n");
    scanf(" %d", &i );
    int *vetor = CriarVetInt(i);
    printf("Preenchendo vetor...");
    for (int a = 0; a < i; a++)
    {
        vetor[a] = 1 + rand() % 100; 
    };
    printf("\nVetor criado:\n");
    for (int b = 0; b < i; b++) {
        printf("%d ", vetor[b]);
    }
    printf("\n");
      long int soma = somavet(vetor, i);
    printf("Soma dos elementos: %ld\n", soma);
    free(vetor);
}