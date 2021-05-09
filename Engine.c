#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sTabulacao{
    char tabela[7][8][8];
}tabulacao;

void imprimeCarta(Fila *ptrF){
    tabulacao *ptrT;
	ptrT = (tabulacao*) malloc(sizeof(tabulacao));
    
    char str[4];
    char strNaipe[1];
    
	switch (ptrF->inicio->naipe){
        case 0:{
            strcpy(strNaipe, "  ");
        }
        case 1:{
            strcpy(strNaipe, "O");
            break;
		}
	    
    	case 2:{
            strcpy(strNaipe , "P");
            break;
        }
        case 3:{
            strcpy(strNaipe , "E");
            break;
        }
        case 4:{
            strcpy(strNaipe , "C");
		    break;
        }
	}
            
    if(ptrF->inicio->carta == 0 || ptrF->inicio->carta > 9){
        switch (ptrF->inicio->carta){
            case 0:{
                strcpy(str, "  ");
                strncat(str, strNaipe,1);
				strncat(str," ",1);
            }
            case 1:{
                strcpy(str, "A");
                strncat(str, strNaipe,1);
				strncat(str," ",1);
                break;
            }
			case 10:{
				strncat(itoa(ptrF->inicio->carta, str, 10), strNaipe,1);
				break;
			}
            case 11:{
                strcpy(str, "J");
                strncat(str, strNaipe,1);
				strncat(str," ",1);                        
                break;
            }
            case 12:{
                strcpy(str, "Q");
                strncat(str, strNaipe,1);
				strncat(str," ",1);
                break;
            }
            case 13:{
                strcpy(str, "K");
                strncat(str, strNaipe,1);
				strncat(str," ",1);
            }
        }
    }else{
        strncat(itoa(ptrF->inicio->carta, str, 10), strNaipe,1);
		strncat(str," ",1);
    }

	switch(ptrF->inicio->carta){
		case 0:{
			strcpy(ptrT->tabela[0][0]," * * * * ");
			strcpy(ptrT->tabela[1][1],"* * * * *");
			strcpy(ptrT->tabela[2][2]," * * * * ");
			strcpy(ptrT->tabela[3][3],"* * * * *");
			strcpy(ptrT->tabela[4][4]," * * * * ");
			strcpy(ptrT->tabela[5][5],"* * * * *");
			strcpy(ptrT->tabela[6][6]," * * * * ");
			break;
		}
		case 1:{
			strcpy(ptrT->tabela[0][0],"   ___   ");
			strcpy(ptrT->tabela[1][1],"  / _ \\  ");
			strcpy(ptrT->tabela[2][2]," / /_\\ \\ ");
			strcpy(ptrT->tabela[3][3]," |  _  | ");
			strcpy(ptrT->tabela[4][4]," | | | | ");
			strcpy(ptrT->tabela[5][5]," \\_| |_/ ");
			strcpy(ptrT->tabela[6][6],"         ");
			
			break;
		}
		case 2:{
			strcpy(ptrT->tabela[0][0],"         ");
			strcpy(ptrT->tabela[1][1],"    X    ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3],"         ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5],"    X    ");
			strcpy(ptrT->tabela[6][6],"         ");
			break;
		}
		case 3:{
			strcpy(ptrT->tabela[0][0],"         ");
			strcpy(ptrT->tabela[1][1],"    X    ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3],"    X    ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5],"    X    ");
			strcpy(ptrT->tabela[6][6],"         ");
			break;
		}
		case 4:{
			strcpy(ptrT->tabela[0][0],"         ");
			strcpy(ptrT->tabela[1][1]," X     X ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3],"         ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5]," X     X ");
			strcpy(ptrT->tabela[6][6],"         ");
			break;
		}
		case 5:{
			strcpy(ptrT->tabela[0][0],"         ");
			strcpy(ptrT->tabela[1][1]," X     X ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3],"    X    ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5]," X     X ");
			strcpy(ptrT->tabela[6][6],"         ");
			break;
		}
		case 6:{
			strcpy(ptrT->tabela[0][0],"         ");
			strcpy(ptrT->tabela[1][1]," X     X ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3]," X     X ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5]," X     X ");
			strcpy(ptrT->tabela[6][6],"         ");
			break;
		}
		case 7:{
			strcpy(ptrT->tabela[0][0]," X     X ");
			strcpy(ptrT->tabela[1][1],"         ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3]," X  X  X ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5],"         ");
			strcpy(ptrT->tabela[6][6]," X     X ");
			break;
		}
		case 8:{
			strcpy(ptrT->tabela[0][0]," X     X ");
			strcpy(ptrT->tabela[1][1],"    X    ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3]," X     X ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5],"    X    ");
			strcpy(ptrT->tabela[6][6]," X     X ");
			break;
		}
		case 9:{
			strcpy(ptrT->tabela[0][0]," X     X ");
			strcpy(ptrT->tabela[1][1],"    X    ");
			strcpy(ptrT->tabela[2][2],"         ");
			strcpy(ptrT->tabela[3][3]," X  X  X ");
			strcpy(ptrT->tabela[4][4],"         ");
			strcpy(ptrT->tabela[5][5],"    X    ");
			strcpy(ptrT->tabela[6][6]," X     X ");
			break;
		}
		case 10:{
			strcpy(ptrT->tabela[0][0]," X     X ");
			strcpy(ptrT->tabela[1][1],"    X    ");
			strcpy(ptrT->tabela[2][2]," X     X ");
			strcpy(ptrT->tabela[3][3],"         ");
			strcpy(ptrT->tabela[4][4]," X     X ");
			strcpy(ptrT->tabela[5][5],"    X    ");
			strcpy(ptrT->tabela[6][6]," X     X ");
			break;
		}
		case 11:{
			strcpy(ptrT->tabela[0][0],"    ___  ");
			strcpy(ptrT->tabela[1][1],"   |_  | ");
			strcpy(ptrT->tabela[2][2],"     | | ");
			strcpy(ptrT->tabela[3][3],"     | | ");
			strcpy(ptrT->tabela[4][4]," /\\__/ / ");
			strcpy(ptrT->tabela[5][5]," \\____/  ");
			strcpy(ptrT->tabela[6][6],"         ");
				break;
		}
		case 12:{
			strcpy(ptrT->tabela[0][0],"  _____  ");
			strcpy(ptrT->tabela[1][1]," |  _  | ");
			strcpy(ptrT->tabela[2][2]," | | | | ");
			strcpy(ptrT->tabela[3][3]," | | | | ");
			strcpy(ptrT->tabela[4][4]," \\ \\./ / ");
			strcpy(ptrT->tabela[5][5],"  \\_/\\_\\ ");
			strcpy(ptrT->tabela[6][6],"         ");
			break;
		}
		case 13:{
			strcpy(ptrT->tabela[0][0],"  _   __ ");
			strcpy(ptrT->tabela[1][1]," | | / / ");
			strcpy(ptrT->tabela[2][2]," | |/ /  ");
			strcpy(ptrT->tabela[3][3]," |    \\  ");
			strcpy(ptrT->tabela[4][4]," | |\\  \\ ");
			strcpy(ptrT->tabela[5][5]," \\_| \\_/ ");
			strcpy(ptrT->tabela[6][6],"        ");
			break;
		}
	}


	printf("\t.--------------.- \t.---------------.\n");
	printf("\t|              |||\t|%s            |\n",str);
	printf("\t|   --------   |||\t|   ---------   |\n");
	printf("\t|  | * * * *|  |||\t|  |%s|  |\n",ptrT->tabela[0][0]);
	printf("\t|  |* * * * |  |||\t|  |%s|  |\n",ptrT->tabela[1][1]);
	printf("\t|  | * * * *|  |||\t|  |%s|  |\n",ptrT->tabela[2][2]);
	printf("\t|  |* * * * |  |||\t|  |%s|  |\n",ptrT->tabela[3][3]);
	printf("\t|  | * * * *|  |||\t|  |%s|  |\n",ptrT->tabela[4][4]);
	printf("\t|  |* * * * |  |||\t|  |%s|  |\n",ptrT->tabela[5][5]);
	printf("\t|  | * * * *|  |||\t|  |%s|  |\n",ptrT->tabela[6][6]);
	printf("\t|   --------   |||\t|   ---------   |\n");
	printf("\t|              |||\t|            %s|\n",str);
	printf("\t'--------------'- \t'---------------'\n");
	/*
	printf("\n\tMonte Principal\t\t    Monte Extra\n");
	printf(" --- --- --- ------------- \t --- ------------- \n");
	printf("|%s|%s|%s|%s           |\t|%s|%s          |\n",'  ','  ','  ',str);
	printf("|   |   |   |   -------   |\t|   |   -------   |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|  ||  ||  ||  |%s|  |\t|  ||  |%s|  |\n");
	printf("|   |   |   |   -------   |\t|   |   -------   |\n");
	printf("|   |   |   |          %s|\t|   |          %s|\n",'  ',str);
	printf(" --- --- --- ------------- \t --- ------------- \n");
	*/
}

void iniciaJogo(jogador *ptrJ1, jogador *ptrJ2){
	//Inicializando baralho principal
	LDE *ptrLDE;
	initLDE(&ptrLDE);
	inicializaBaralho(&ptrLDE);
	embaralhaLDE(&ptrLDE, ptrJ1->baralhoPrincipal);
	
	listaFilaClassico(ptrJ1->baralhoPrincipal);

	inicializaBaralho(&ptrLDE);
	embaralhaLDE(&ptrLDE, ptrJ2->baralhoPrincipal);
	/*
    int menu;
    //system("cls");
    //imprimir tabuleiro
    imprimeCarta(baralho1);
    printf("1- Comprar carta do baralho\n");
    printf("2- Comprar carta do monte extra\n");
    scanf("%d", &menu);
    switch (menu){
        case 1:{
            int caso1;
            //system("cls");
            //imprime baralho com 1 lugar da fila.
            imprimeCarta(baralho1);
            printf("1- Adiciona carta no monte principal\n");
            printf("2- Adiciona carta no monte extra\n");
            printf("3- Descartar a carta\n");
            scanf("%d", &caso1);
            switch (caso1){
                case 1:{
					if(montePrincipal == NULL){
						insereInicioDeque(montePrincipal,baralho1->inicio->carta, baralho1->inicio->naipe);
					}else{
						if(montePrincipal->inicio->carta >= baralho1->inicio->carta){
							insereInicioDeque(montePrincipal, baralho1->inicio->carta, baralho1->inicio->naipe);
						}else{
							insereFinalDeque(montePrincipal, baralho1->inicio->carta, baralho1->inicio->naipe);
						}
					}
                    printf("adicionado no monte principal\n");
                    break;
                }
                case 2:{
                    printf("adicionado no monte extra\n");
                    break;
                }
                case 3:{
                    printf("carta descartada com sucesso\n");
                    break;
                }
            }
            //fim do case 1 do primeiro menu
            break;
        }
    }
	*/
}