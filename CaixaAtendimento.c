#include "filaCaixa.h"
#include "stdio.h"


float chamaProximo(Fila *fila, Fila *FilaAtendidos){
    float proximo = remova(fila);
    insere(FilaAtendidos, proximo);
    return proximo;
}

void visualizarFilas(Fila *filaNormal, Fila *filaPrioritaria){
    printf("Normal: %d\n", tamanhoFila(filaNormal));
    printf("Prioritaria: %d\n", tamanhoFila(filaPrioritaria));
}

void Atendimentos(Fila *filaNormalAtendidos, Fila *filaPrioritariaAtendidos){
    printf("Atendidos na normal: %d\n", tamanhoFila(filaNormalAtendidos));
    printf("Atendidos na prioritaria: %d\n", tamanhoFila(filaPrioritariaAtendidos));
    printf("Atendidos no total: %d\n", tamanhoFila(filaNormalAtendidos) + tamanhoFila(filaPrioritariaAtendidos));
}

void menuControle(){
    printf("MENU DE CONTROLE\n1 - Menu caixa\n2 - Menu cliente\n3 - Encerrar\n");
}

void menuCaixa(){
    printf("CAIXA \n1 - Chamar o proximo\n2 - Visualizar as filas\n3 - Listar quantidade de atendimentos\n4 - Voltar ao menu anterior");
}
void menuSenha(){
    printf("RETIRAR SENHA\n1 - Normal\n2 - Prioritaria\n3 - Voltar ao menu anterior");
}

int geraSenhaNormal(Fila *filaNormal){
    return tamanhoFila(filaNormal) + 1;
}

float geraSenhaPrioritaria(Fila *filaPrioritaria){
    return tamanhoFila(filaPrioritaria) + 1.1;
}