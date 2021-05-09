#include <stdio.h>
#include <stdlib.h>

typedef struct sPilha{
    int carta, naipe;
    struct sPilha *dir;
}pilha;

pilha* alocaNoPilha(){
    return (pilha*) malloc(sizeof(pilha));
}

void initPilha(pilha *ptrP){
    ptrP = alocaNoPilha();
    ptrP->dir = NULL;
    if ( ptrP == NULL ){
        printf("Erro na alocacao do no\n");
        exit(0);
    }
}

int vaziaPilha(pilha *ptrP){
    if ( ptrP->dir == NULL ) return 1;
    return 0;
}

void inserePilha(pilha **ptrP, int carta, int naipe){
    pilha *novo;
    novo = alocaNoPilha();
    if ( novo == NULL ) return;
    novo->carta = carta;
    novo->naipe = naipe;
    novo->dir = *ptrP;
    
    *ptrP = novo;
}

void removePilha(pilha **ptrP){
    if(vaziaPilha(*ptrP)) {
        printf("Lista Vazia!\n");
        return;
    }
    
    pilha *aux;
    aux = *ptrP;
    
    *ptrP = aux->dir;
    
    free(aux);
}

void listaPilhaClassico(pilha *ptrP){
    if(vaziaPilha(ptrP)){
        printf("Lista vazia!\n");
        return;
    }
    
    pilha *aux;

    while(ptrP != NULL){
        printf("%d%d\n", ptrP->carta, ptrP->naipe);
        aux = ptrP;
        ptrP = ptrP->dir;
        removePilha(&aux);
    }
}

void listaPilhaNaoClassico(pilha *ptrP){
    if(vaziaPilha(ptrP)){
        printf("Lista vazia!\n");
        return;
    }
    
    pilha *aux;
    aux = ptrP;

    while(!vaziaPilha(aux)){
        printf("%d%d\n", aux->carta, aux->naipe);
        aux = aux->dir;
    }
}