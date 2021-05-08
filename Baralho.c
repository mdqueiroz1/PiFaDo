#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*
A função irá inicializar o baralho em ordem crescente,
logo após o baralho será embaralhado.
*/
void inicializaBaralho(LDE **ptrBaralho){
    char str[3];
    char naipe[1];

    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            inserirInicioLSE(ptrBaralho, (i+1), (j+1));
        }
    }
    printf("\n");
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
    /*
    Função criada para gerar 52 numeros aleatórios para embaralhar o baralho     
    */
    /*for (int i = 0; i < 52; i++){
        numRand = rand()%cont;
        printf("%d ", i);
        for(int j = 0; j < numRand; j++){
            aux = aux->dir;
        }
        printf("%d%d ", aux->carta, aux->naipe);
        
        insereFila(ptrF->inicio, aux->carta, aux->naipe);
        removeCelulaLDE(ptrL, aux);
        
        aux = *ptrL;
        cont --;
    }*/

    for (int k = 0; k < 52; k++){
        printf("%d%d ", aux->carta, aux->naipe);
        insereFila(ptrF, aux->carta,aux->naipe);
        aux = aux->dir;
    }
    
}