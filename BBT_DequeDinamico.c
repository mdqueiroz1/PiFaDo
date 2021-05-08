#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sNoDeque{
    int carta, naipe;
    struct sNoDeque *dir;
    struct sNoDeque *esq;
}NoDeque;

typedef struct sDEQUE{
    int qnt;
    NoDeque *inicio;
    NoDeque *final;
}DEQUE;

NoDeque* alocaNoDeque(){
    return ((NoDeque*) malloc(sizeof(NoDeque)));
}

void initDeque(DEQUE *ptrD){
    ptrD = (DEQUE*) malloc(sizeof(DEQUE));
    ptrD->inicio = NULL;
    ptrD->final = NULL;
    ptrD->qnt = 0;
}

int vazioDeque(DEQUE *ptrD){
    if (ptrD->inicio == NULL) return 1;
    
    return 0;
}

void insereInicioDeque(DEQUE *ptrD, int carta, int naipe){
    if(ptrD == NULL){
        printf("Deque nao inicializado!\n");
        return;
    }     
    
    NoDeque *novo;
    novo = alocaNoDeque();
    if(novo == NULL) {
        printf("Não foi alocado.\n");
        return;
    }
    
    novo->carta = carta;
    novo->naipe = naipe;
    novo->dir = ptrD->inicio;
    novo->esq = NULL;

    if(vazioDeque(ptrD)) {
        ptrD->final = novo;
    }else {
        (ptrD->inicio)->esq = novo;
    }

    ptrD->inicio = novo;
    ptrD->qnt += 1;
}

void insereFinalDeque(DEQUE *ptrD, int carta, int naipe){
    NoDeque* novo;
    novo = alocaNoDeque();
    if(novo == NULL) return;

    novo->carta = carta;
    novo->naipe = naipe;
    novo->dir = NULL;

    if(vazioDeque(ptrD) == 1){
        ptrD->inicio = novo;
        ptrD->final = novo;
    }else{
        (ptrD->final)->dir = novo;
        novo->esq = ptrD->final;
        ptrD->final = novo;
    }
    ptrD->qnt += 1;
}

void removeFinalDeque(DEQUE *ptrD){
    if(ptrD == NULL) return;
    if(vazioDeque(ptrD)) return;

    NoDeque *aux = ptrD->final;
    if(aux == ptrD->inicio){
        ptrD->inicio = NULL;
        ptrD->final = NULL;
    }else{
        (aux->esq)->dir = NULL;
        ptrD->final = aux->dir;
    }
    free(aux);
    ptrD->qnt -= 1;
}

void removeInicioDeque(DEQUE *ptrD){
    NoDeque *aux;
    if(vazioDeque(ptrD)) return;

    aux = (ptrD->inicio)->dir;
    free(ptrD->inicio);
    ptrD->inicio = aux;

    if(ptrD->inicio != NULL)
        (ptrD->inicio)->esq = NULL;
    else
        ptrD->final = NULL;
    
    ptrD->qnt -= 1;
}

void listaDequeNaoClassico(DEQUE *ptrD){
    if(vazioDeque(ptrD)) return;
    
    NoDeque *aux;
    aux = ptrD->inicio;
    
    while(aux != NULL){
        printf("%d%d\t", aux->carta, aux->naipe);
        aux = aux->dir;
    }
    printf("\n");
}

void listaDequeClassico(DEQUE *ptrD){

    if(vazioDeque(ptrD)) return;

    while(ptrD->inicio != NULL){
        printf("%d%d\t", ptrD->inicio->carta, ptrD->inicio->naipe);
        removeInicioDeque(ptrD);
    }

    printf("\n");
    return;
}