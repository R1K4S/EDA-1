#include "../include/VetoresC.h"
#include <stdio.h>
#include <stdlib.h>

int* CriarVetInt(int quantidade) {
    if(quantidade <= 0) {
        fprintf(stderr, "Erro: Tamanho inválido para vetor (deve ser > 0)\n");
        return NULL;
    }
    
    int *vetor = (int*)malloc(quantidade * sizeof(int));
    if(vetor == NULL) {
        fprintf(stderr, "Erro: Falha na alocação de memória\n");
        return NULL;
    }
    return vetor;
}

float* CriarVetFloat(int quantidade) {
    if(quantidade <= 0) {
        fprintf(stderr, "Erro: Tamanho inválido para vetor (deve ser > 0)\n");
        return NULL;
    }
    
    float *vetor = (float*)malloc(quantidade * sizeof(float));
    if(vetor == NULL) {
        fprintf(stderr, "Erro: Falha na alocação de memória\n");
        return NULL;
    }
    return vetor;
}