#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void imprimeCarta(int carta){

	int PilhaPrinc[4],PilhaExt[2];

	strcpy(naipe," A ");

	switch(carta){
		case 1:{
			strcpy(tabulacao[0][],"  ___  ");
			strcpy(tabulacao[1][]," / _ \\ ");
			strcpy(tabulacao[2][],"/ /_\\ \\");
			strcpy(tabulacao[3][],"|  _  |");
			strcpy(tabulacao[4][],"| | | |");
			strcpy(tabulacao[5][],"\\_| |_/");
			strcpy(tabulacao[6][],"       ");
			break;
		}
		case 2:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			break;
		}
		case 3:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[5][3],"X");
			break;
		}
		case 4:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			break;
		}
		case 5:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			break;
		}
		case 6:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			break;
		}
		case 7:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			break;
		}
		case 8:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			break;
		}
		case 9:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			break;
		}
		case 10:{
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			strcpy(tabulacao[1][3],"X");
			strcpy(tabulacao[5][3],"X");
			break;
		}
		case 11:{
			strcpy(tabulacao[0][],"   ___ ");
			strcpy(tabulacao[0][],"  |_  |");
			strcpy(tabulacao[0][],"    | |");
			strcpy(tabulacao[0][],"    | |");
			strcpy(tabulacao[0][],"/\\__/ /");
			strcpy(tabulacao[0][],"\\____/ ");
			strcpy(tabulacao[0][],"       ");
				break;
		}
		case 12:{
			strcpy(tabulacao[0][]," _____ ");
			strcpy(tabulacao[0][],"|  _  |");
			strcpy(tabulacao[0][],"| | | |");
			strcpy(tabulacao[0][],"| | | |");
			strcpy(tabulacao[0][],"\\ \\/' /");
			strcpy(tabulacao[0][]," \\_/\\_\\");
			strcpy(tabulacao[0][],"       ");
			break;
		}
		case 13:{
			strcpy(tabulacao[0][]," _   __");
			strcpy(tabulacao[0][],"| | / /");
			strcpy(tabulacao[0][],"| |/ / ");
			strcpy(tabulacao[0][],"|    \\ ");
			strcpy(tabulacao[0][],"| |\\  \\");
			strcpy(tabulacao[0][],"\\_| \\_/");
			strcpy(tabulacao[0][],"       ");
			break;
		}
	}


	printf("\t.-------------.- \t.-------------.\n");
	printf("\t|             |||\t|%s           |\n");
	printf("\t|   -------   |||\t|   -------   |\n");
	printf("\t|  | * * * |  |||\t|  |%s|  |\n");
	printf("\t|  |* * * *|  |||\t|  |%s|  |\n");
	printf("\t|  | * * * |  |||\t|  |%s|  |\n");
	printf("\t|  |* * * *|  |||\t|  |%s|  |\n");
	printf("\t|  | * * * |  |||\t|  |%s|  |\n");
	printf("\t|  |* * * *|  |||\t|  |%s|  |\n");
	printf("\t|   -------   |||\t|   -------   |\n");
	printf("\t|             |||\t|           %s|\n");
	printf("\t'-------------'- \t'-------------'\n");
	printf("\n\tMonte Principal\t\t    Monte Extra\n");
	printf(" --- --- --- ------------- \t --- ------------- \n");
	printf("|%s |%s |%s |%s           |\t|%s |%s           |\n");
	printf("|   |   |   |   -------   |\t|   |   -------   |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|   |   |   |   -------   |\t|   |   -------   |\n");
	printf("|   |   |   |           %s|\t|   |           %s|\n");
	printf(" --- --- --- ------------- \t --- ------------- \n");


}

int main(){
	int carta;
	scanf("%d", &carta);
	system("cls");
	
	imprimeCarta(carta);

	return 0;

}