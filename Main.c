#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BBT_LSE.c"
#include "BBT_Fila.c"
#include "BBT_Pilha.c"
#include "BBT_DequeDinamico.c"
#include "Baralho.c"
#include "Engine.c"
//oi matheus
int menu(Fila *ptrF){
    int loop;
    printf("1- Iniciar jogo\n");
    printf("2- Creditos\n");
    scanf("%d", &loop);
    switch (loop){
        case 1:{
            iniciaJogo(ptrF);
            break;
        }
        case 2:{
            printf("oi");
            break;
        }
   
    }
    return loop;
}

int main(){
    //inicializar o baralho base
    LSE *ptrLSE;
    initLSE(&ptrLSE);
    //definição do baralho de jogo
    Fila Baralho1;
    initFila(&Baralho1);
    //embaralha o baralho para o jogo
    inicializaBaralho(&ptrLSE);
    embaralhaLDE(&ptrLSE, &Baralho1);

    int loop;

    do{
        loop = menu(&Baralho1);
    }while(loop != 1);
    
    return 0;
}
