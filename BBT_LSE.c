#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sLSE{
    char carta[2];
    struct sLSE *dir;
    struct sLSE *esq; 
}LSE;

void initLSE(LSE **ptrLSE){
    *ptrLSE = NULL;
}

LSE* alocarLSE(){
    return (LSE*) malloc(sizeof(LSE));
}

int listaVazia(LSE *ptrLSE){
    if(ptrLSE == NULL){
        printf("Lista Vazia!\n");
        return 1;
    }else{
        return 0;
    }
}

void inserirInicioLSE(LSE **ptrLista, char *elem){
    LSE *aux;

    aux = alocarLSE();
    
    if(aux != NULL){
        strcpy(aux->carta, elem);
        aux->dir = (*ptrLista);
        *ptrLista = aux;
    }else{
        printf("Erro ao alocar o LSE.\n");
        exit(1);
    }
}

int imprimeListaLSE(LSE *ptrLista){
    LSE *aux;
    aux = ptrLista;

    if(listaVazia(aux)){
        return 1;
    }else{
        while(aux != NULL){
            printf("%s, ", aux->carta);
            aux = aux->dir;
        }
    }
    return 0;
}

void removeCelulaLDE(LSE **ptrL, LSE *no){
    if((*ptrL) == NULL) return;
    
    if(no->esq == NULL){
        (*ptrL) = no->dir;
        (*ptrL)->esq = NULL;
        free(no);
        return;
    }else
        (no->esq)->dir = no->dir;

    if(no->dir != NULL)
        (no->dir)->esq = no->esq;
    else
        (no->esq)->dir = NULL;

    free(no);    
}
        