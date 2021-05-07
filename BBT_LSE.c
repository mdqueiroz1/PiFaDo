#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sLSE{
    int carta, naipe;
    struct sLSE *dir;
    struct sLSE *esq; 
}LSE;

void initLSE(LSE **ptrLSE){
   // *ptrLSE = alocarLSE();
    *ptrLSE = NULL;
}

LSE* alocarLSE(){
    return (LSE*) malloc(sizeof(LSE));
}

int listaVaziaLSE(LSE *ptrLSE){
    if(ptrLSE == NULL){
        printf("Lista Vazia!\n");
        return 1;
    }else{
        return 0;
    }
}

void inserirInicioLSE(LSE **ptrLista, int carta, int naipe){
    LSE *aux;

    aux = alocarLSE();
    
    if(aux != NULL){
        aux->carta = carta;
        aux->naipe = naipe;
        aux->dir = (*ptrLista);
        *ptrLista = aux;
    }else{
        printf("Erro ao alocar o LSE.\n");
        exit(1);
    }
}

void removeInicioLDE(LSE **ptrL){
    LSE *aux;
    aux = *ptrL;
    if(!listaVaziaLSE(*ptrL)){
        *ptrL = aux->dir;
        (*ptrL)->esq = NULL;
        free(aux);
    }else{
        exit(1);
    }
}

void removeCelulaLDE(LSE **ptrL, LSE *no){
    if((*ptrL) == NULL) return;
    
    if(no == *ptrL)
        removeInicioLDE(&no);
    else{
        (no->esq)->dir = no->dir;
        if(no->dir != NULL)
            (no->dir)->esq = no->esq;
        
        free(no);
    }
}

int imprimeListaLSE(LSE *ptrLista){
    LSE *aux;
    aux = ptrLista;

    if(listaVaziaLSE(aux)){
        return 1;
    }else{
        while(aux != NULL){
            printf("%d%d, ", aux->carta,aux->naipe);
            aux = aux->dir;
        }
    }
    return 0;
}