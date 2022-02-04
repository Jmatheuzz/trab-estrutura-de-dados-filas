#include "filaCaixa.h"
#include <stdio.h>
#include <stdlib.h>

struct fila{
    int n;
    int inicio;
    float vet[TAM];
};

Fila* criaFila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->n = 0;
    f->inicio = 0;
    return f;
}

void insere(Fila *f, float valor){
    int fim;
    if(f->n == TAM){
        printf("Fila cheia!");
        exit(1);
    }
    fim = (f->inicio + f->n) % TAM;
    f->vet[fim] = valor;
    f->n++;
}

float remova(Fila *f){
    float valor;
    if(filaVazia(f)){
        printf("Fila vazia!\n");
        exit(1);
    }
    valor = f->vet[f->inicio];
    f->inicio = (f->inicio + 1) % TAM;
    f->n--;
    return valor;
}

int filaVazia(Fila *f){
    return (f->n == 0);
}

void libera(Fila *f){
    free(f);
}

int tamanhoFila(Fila *f){
    return f->n;
}

