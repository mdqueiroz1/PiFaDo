#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
dois baralhos de 54 cartas, cada carta no valor inteiro de 1 a 13

cada naipe representado por um valor inteiro de 1 a 4
ou
cada naipe representado por um valor char 'C'opas 
										  'E'spadas 
										  'O'uros
										  'P'aus

*/

typedef struct sBaralhoPadrao{
	char carta[2];
	int posicao;
	struct sBaralho *prox;
}baralhoPadrao;

typedef struct sBaralho{
	char carta[2];
}Baralho;

/*
Função feita para criar o baralho completo de A a K com todos
os naipes em ordem para depois serem embaralhados. 
*/
void inicializaBaralho(baralhoPadrao **ptrBaralho){
    char str[3];
    char naipe[1];
    for(int i = 0; i < 4; i++){
        switch (i){
            case 0:
                strcpy(naipe,"O");
                break;
            
            case 1:{
                strcpy(naipe , "P");
                break;
            }
            
            case 2:{
                strcpy(naipe , "E");
                break;
            }
            
            case 3:{
                strcpy(naipe , "C");
                break;
            }
        }
        for (int j = 0; j < 13; j++){
            int num = j+1;
            if(num == 1 || num > 10){
                switch (num){
                    case 1:{
                        strcpy(str, "A");
                        strncat(str, naipe,1);
                        break;
                    }
                    case 11:{
                        strcpy(str, "J");
                        strncat(str, naipe,1);                        
                        break;
                    }
                    case 12:{
                        strcpy(str, "Q");
                        strncat(str, naipe,1);
                        break;
                    }
                    case 13:{
                        strcpy(str, "K");
                        strncat(str, naipe,1);
                    }
                }
            }else{
                strncat(itoa(num, str, 10), naipe,1);
            }
            
            inserirInicio(*ptrBaralho,str);
        }
    }
}

/*
Função feita para construir o baralho embaralhado, pegando
o padrão, buscando um numero entre 1 e 54 e alocando essa carta
no deque de cartas embaralhadas.
*/
void shuffle(baralhoPadrao **ptrBaralho ){

}

void inserirInicio(baralhoPadrao **ptrLista, char *elem){
    baralhoPadrao *novo;
    novo = alocarNo();
    if(novo != NULL){
        strcpy(novo->carta, elem);
		
		if(*ptrLista == NULL){
			*ptrLista = novo;
			novo->prox = NULL;
		
		}else{
        	novo->prox = *ptrLista;
			*ptrLista = novo;
		}
    }else{
        printf("Erro ao alocar o no.\n");
        exit(1);
    }
}

int imprimeLista(baralhoPadrao *ptrLista){
    baralhoPadrao *aux;
    if(listaVazia(ptrLista)){
        printf("lista vazia.\n");
        return 1;    
    }else{
        aux = ptrLista;
        while(aux != NULL){
            printf("%s\t",ptrLista->carta);
            aux = aux->prox;  
        }
    }
    return 0;
}