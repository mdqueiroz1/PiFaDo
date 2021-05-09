#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sNoFila{
    int carta,naipe;
    struct sNoFila *dir;
}NoFila;

typedef struct sFila{
    NoFila *inicio;
    NoFila *final;
}Fila;

Fila* alocaFila(){
    return (Fila*) malloc(sizeof(Fila));
}


void initFila(Fila *ptrF){
    ptrF = alocaFila();
    ptrF->inicio = NULL;
    ptrF->final = NULL;
}

int vazioFila(Fila *ptrF){
    if(ptrF->inicio == NULL) return 1;
    if(ptrF->final == NULL) return 1;
    return 0;
}

void insereFila(Fila *ptrF, int carta, int naipe){
    if(ptrF == NULL) return;
    
    NoFila *novo;
    novo = (NoFila*) malloc(sizeof(NoFila));
    if(novo == NULL) return;
    novo->carta = carta;
    novo->naipe = naipe;
    
    novo->dir = NULL;
    if(ptrF->inicio == NULL){
    printf("chegou aqui.\n");
        ptrF->inicio = novo;
        ptrF->final = novo;
    }else{
        (ptrF->final)->dir = novo;
        ptrF->final = novo;
    }

}

void removeFila(Fila *ptrF){
    if(ptrF == NULL){
        printf("Lista nao alocada!\n");
        return;
    } 
    if(ptrF->inicio == NULL){
        printf("Lista vazia!\n");
    }

    NoFila *novo;
    novo = (NoFila*) malloc(sizeof(NoFila));
    novo = ptrF->inicio;
    ptrF->inicio = ptrF->inicio->dir;

    if(ptrF->inicio == NULL){
        ptrF->final = NULL;
    }    
    free(novo);
}

void inicioFila(Fila *ptrF){
    if(ptrF == NULL) return;
    if(vazioFila(ptrF)) return;
    
    printf("%d%d\n", ptrF->inicio->carta, ptrF->inicio->naipe);
}

void listaFilaClassico(Fila *ptrF){
    if(ptrF == NULL) return;
    if(vazioFila(ptrF)) return;
    while(!vazioFila(ptrF)){
        printf("%d%d\n", ptrF->inicio->carta, ptrF->inicio->naipe);
        removeFila(ptrF);
    }
}
