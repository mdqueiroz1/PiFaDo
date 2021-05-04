#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BBT_LSE.c"
#include "BBT_Fila.c"
#include "BBT_Pilha.c"
#include "BBT_DequeDinamico.c"
#include "Baralho.c"

int menu(Fila *ptrF){
    int loop=1;
    printf("1- Iniciar jogo\n");
    scanf("%d", &loop);
    switch (loop){
        case 1:{
            listaFilaClassico(ptrF);
            break;
        }
        case 2:{

            break;
        }
   
    }
    return loop;
}

int main(){
    LSE *ptrLSE;
    initLSE(&ptrLSE);
    /*
    pilha extra;
    DEQUE principal;
    */
    Fila Baralho1;
    initFila(&Baralho1);
    inicializaBaralho(&ptrLSE);
    embaralhaLDE(&ptrLSE, &Baralho1);

    int loop;

    do{
        loop = menu(&Baralho1);
    }while(loop != 1);
    
    return 0;
}
