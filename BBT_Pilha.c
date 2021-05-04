#include <stdio.h>
#include <stdlib.h>

typedef struct sPilha{
    char carta[2];
    struct sPilha *dir;
}pilha;

pilha* alocaNoPilha(){
    return (pilha*) malloc(sizeof(pilha));
}

void initPilha(pilha *ptrP){
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

void inserePilha(pilha **ptrP, char *elem){
    pilha *novo;
    novo = alocaNoPilha();
    if ( novo == NULL ) return;
    printf("passou!\n");
    strcpy(novo->carta, elem);
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
        printf("%s\n", ptrP->carta);
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
        printf("%s\n", aux->carta);
        aux = aux->dir;
    }
}