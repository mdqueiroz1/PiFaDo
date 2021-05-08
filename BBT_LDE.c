#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sLSE{
    int carta, naipe;
    struct sLSE *dir;
    struct sLSE *esq; 
}LDE;

LDE* alocarLDE(){
    return (LDE*) malloc(sizeof(LDE));
}

void initLDE(LDE **ptrLSE){
    *ptrLSE = NULL;
}

int listaVaziaLDE(LDE *ptrLSE){
    if(ptrLSE == NULL){
        printf("Lista Vazia!\n");
        return 1;
    }else{
        return 0;
    }
}

void inserirInicioLDE(LDE **ptrLista, int carta, int naipe){
    LDE *aux;
    aux = alocarLDE();
    if(aux == NULL) return;
    
    aux->carta = carta;
    aux->naipe = naipe;
    aux->dir = (*ptrLista);
    aux->esq = NULL;

    if((*ptrLista) != NULL)
        (*ptrLista)->esq = aux;
    (*ptrLista) = aux;
}

void removeInicioLDE(LDE **ptrL){
    LDE *aux;
    aux = *ptrL;
    if(!listaVaziaLDE(*ptrL)){
        *ptrL = aux->dir;
        (*ptrL)->esq = NULL;
        free(aux);
    }else{
        exit(1);
    }
}

void removeCelulaLDE(LDE **ptrL, LDE *no){
    if((*ptrL) == NULL) return;

    if(no == NULL) return;
    if(no->esq == NULL)
        *ptrL = no->dir;
    else
        no->esq->dir = no->dir;
    
    if(no->dir != NULL)
        no->dir->esq = no->esq;
    
    free(no);
}

int imprimeListaLDE(LDE *ptrLista){
    LDE *aux;
    aux = ptrLista;

    if(listaVaziaLDE(aux)){
        return 1;
    }else{
        while(aux != NULL){
            printf("%d%d, ", aux->carta,aux->naipe);
            aux = aux->dir;
        }
    }
    return 0;
}