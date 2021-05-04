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

void desalocarLSE(LSE *ptrLSE){
    free(ptrLSE);
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

void removeCelulaLDE(LSE **ptrL, LSE **no){
    if((*no) == NULL) return;
    
    if((*no)->esq == NULL){
        ((*no)->dir)->esq = NULL;
    }else{
        if((*no)->dir == NULL){
            ((*no)->esq)->dir = NULL;
        }else{
            ((*no)->esq)->dir = (*no)->dir;
            ((*no)->dir)->esq = (*no)->esq;
        }
    }

    desalocarLSE(*no);
    printf("chegou aq\n");
}
        