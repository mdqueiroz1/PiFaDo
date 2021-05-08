#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BBT_LDE.c"
#include "BBT_Fila.c"
#include "BBT_Pilha.c"
#include "BBT_DequeDinamico.c"
#include "Baralho.c"
#include "Engine.c"

int menu(Fila *ptrF){
    int loop;
    system("cls");
	printf("8888888b.  d8b 8888888888       8888888b.\n");           
	printf("888   Y88b Y8P 888              888  \"Y88b\n");          
	printf("888    888     888              888    888\n");          
	printf("888   d88P 888 8888888  8888b.  888    888  .d88b.\n");  
	printf("8888888P\"  888 888         \"88b 888    888 d88\"\"88b\n"); 
	printf("888        888 888     .d888888 888    888 888  888\n"); 
	printf("888        888 888     888  888 888  .d88P Y88..88P\n"); 
	printf("888        888 888     \"Y888888 8888888P\"   \"Y88P\"\n");
	printf("\t\tPife Adaptado\n\n");         

 	printf("1 - Iniciar Jogo\n");
    printf("2 - Creditos\n");
    printf("9 - Sair do programa\n");
    scanf("%d", &loop);
    switch (loop){
        case 1:{
            iniciaJogo(ptrF);
            break;
        }
        case 2:{
            printf("  _____________________________\n");
            printf(" |       Pife Adaptado         |\n");
            printf(".-------------------------------.\n");
            printf("|    Matheus Dias de Queiroz    |\n");
            printf("|  Marcos Aurelio Duarte Souza  |\n");
            printf("'-------------------------------'\n");
            break;
        }
   
    }
    return loop;
}

int main(){
    //inicializar o baralho base
    LDE *ptrLSE;
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
    }while(loop != 9);
    
    return 0;
}
