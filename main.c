#include <stdio.h>
#include <stdlib.h>
#include "filaCaixa.h"
#include "CaixaAtendimento.h"




int main(){

    Fila *normal = criaFila();
    Fila *prioritaria = criaFila();

    Fila *normalAtendidos = criaFila();
    Fila *prioritariaAtendidos = criaFila();

    int i = 0;
    int k = 0;
    int j = 0;
    int cont = 1;
    while(i==0){
        char opcao1;
        menuControle();
        scanf(" %c", &opcao1);
        int cont = 1;
        switch (opcao1)
        {
        case '1':
            k  = 0;
            j = 0;
            while(k==0){
            char opcao2;
            menuCaixa();
            scanf(" %c", &opcao2);
            switch (opcao2)
            {
            case '1':

                if(!filaVazia(normal) && !filaVazia(prioritaria)){
                if(cont == 1){
                    printf("Prioridade : %f\n", chamaProximo(prioritaria, prioritariaAtendidos));
                    cont = 3;
                }else{
                    printf("Normal: %f\n", chamaProximo(normal, normalAtendidos));
                    cont--;
                    }

                }else{
                    if(!filaVazia(normal) || !filaVazia(prioritaria)){
                        if(!filaVazia(normal) && filaVazia(prioritaria)){
                        printf("Normal: %f\n", chamaProximo(normal, normalAtendidos));
                        }
                        if(filaVazia(normal) && !filaVazia(prioritaria)){
                            printf("Prioridade: %f\n", chamaProximo(prioritaria, prioritariaAtendidos));
                        }
                    }else{
                    if(filaVazia(normal) && filaVazia(prioritaria)){
                    printf("Nao tem ninguem nas filas\n");
                        }
                    }
                
                }
                break;
            case '2':
                visualizarFilas(normal, prioritaria);
                break;
            case '3':
                Atendimentos(normalAtendidos, prioritariaAtendidos);
                break;
            case '4':
                k = 1;
                break;
            default:
                printf("Opcao invalida\n");
                break;
            }
            }
            break;
        
        case '2':
        
            while(j==0){
            char opcao3;
            menuSenha();
            scanf(" %c", &opcao3);
            switch (opcao3)
            {
            case '1':
                if(tamanhoFila(normal)==10){
                    printf("Fila cheia\n");
                }else{
                    insere(normal, geraSenhaNormal(normal));
                }
                break;
            
            case '2':
                if(tamanhoFila(normal)==10){
                    printf("Fila cheia");
                }else{
                    insere(prioritaria, geraSenhaPrioritaria(prioritaria));
                }
                break;
            case '3':
                j = 1;
                break;
            default:
                break;
            }
        }
        break;
        case '3':
            i = 1;
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }

    

    return 0;
}