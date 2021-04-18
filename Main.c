/*
Autores: Matheus Dias de Queiroz
         Marcos Aurelio Duarte

*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "Baralho.c"
#include "Menu.c"
#include "Impressao.c"

int main(){
    
    int loop=0;

    char carta1[2];
    strcpy(carta1, "AO");
    imprimeCarta(carta1,1);
    /*
    do{
        loop = menu();
    }while(loop != 9);
    */
    return 0;
}
