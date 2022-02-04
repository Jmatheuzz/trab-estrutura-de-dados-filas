#include "filaCaixa.h"

/*Biblioteca das funções necessárias na aplicação do caixa de atendimento*/

/*Busca o próximo da fila*/
float chamaProximo(Fila *fila, Fila *FilaAtendidos);
/*Mostra quantas pessoas tem em cada fila*/
void visualizarFilas(Fila *filaNormal, Fila *filaPrioritaria);
/*Mostra quantos atendimentos teve até o momento*/
void Atendimentos(Fila *filaNormalAtendidos, Fila *filaPrioritariaAtendidos);
/*Mostra o menu de controle*/
void menuControle();
/*Mostra o menu de caixa*/
void menuCaixa();
/*Mostra o menu de retirar senha*/
void menuSenha();
/*Gera uma senha normal*/
int geraSenhaNormal(Fila *filaNormal);
/*Gera uma senha prioritaria*/
float geraSenhaPrioritaria(Fila *filaPrioritaria);

