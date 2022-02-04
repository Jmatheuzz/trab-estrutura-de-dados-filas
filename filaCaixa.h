/*TAD de uma fila, para implementar no caixa de atendimento*/


typedef struct fila Fila;
#define TAM 10
/*Cria uma fila vazia*/
Fila* criaFila();
/*Insere um elemento na fila*/
void insere(Fila *f, float valor);
/*Remove um elemento da fila*/
float remova(Fila *f);
/*Verifica se a fila está vazia*/
int filaVazia(Fila *f);
/*Libera a memória ocupada por uma fila*/
void libera(Fila *f);
/*Retorna o tamanho da fila*/
int tamanhoFila(Fila *f);