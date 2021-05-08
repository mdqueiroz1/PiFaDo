#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct sJogador{
    int pontuacao;
    Fila *baralhoPrincipal;
    DEQUE *montePrincipal;
    pilha *monteExtra;
}jogador;

void initJogador(jogador *ptrJ){
    ptrJ = (jogador*) malloc(sizeof(jogador));

    initDeque(ptrJ->montePrincipal);
    initFila(ptrJ->baralhoPrincipal);
    initPilha(ptrJ->monteExtra);
        printf("123\n");
    ptrJ->pontuacao = 0;
}

/*
A função irá inicializar o baralho em ordem crescente,
para logo após o baralho ser embaralhado.
*/
void inicializaBaralho(LDE **ptrBaralho){
    for(int i = 0; i < 13; i++){
        for (int j = 0; j < 4; j++){
            inserirInicioLDE(ptrBaralho, (i+1), (j+1));
        }
    }
}

/*
Função feita para construir o baralho embaralhado, pegando
o padrÃ£o, buscando um numero entre 1 e 52 e alocando essa carta
no deque de cartas embaralhadas.
*/
void embaralhaLDE (LDE **ptrL, Fila *ptrF){
    LDE *aux;
    aux = (*ptrL);
    int cont = 52;
    int numRand;
    
    srand( (unsigned) time (NULL));
    
    //Função criada para gerar 52 numeros aleatórios para embaralhar o baralho     
    for (int i = 0; i < 52; i++){
        numRand = rand()%cont;
        for(int j = 0; j < numRand; j++){
            aux = aux->dir;
        }
        insereFila(ptrF, aux->carta, aux->naipe);
        removeCelulaLDE(ptrL, aux);
        imprimeListaLDE(*ptrL);
        aux = *ptrL;
        cont --;
    }
}