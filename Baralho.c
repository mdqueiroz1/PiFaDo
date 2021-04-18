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

typedef struct sB1{
	char carta[2];
}B1;
/*
Função feita para criar o baralho completo de A a K com todos
os naipes em ordem para depois serem embaralhados. 
*/
void inicializaBaralho(baralhoPadrao **ptrBaralho){
//itoa(inteiro, string, 10 - decimal);
}

/*
Função feita para construir o baralho embaralhado, pegando
o padrão, buscando um numero entre 1 e 54 e alocando essa carta
no deque de cartas embaralhadas.
*/
void shuffle(baralhoPadrao **ptrBaralho, ){

}