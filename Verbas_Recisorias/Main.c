#include <stdio.h>
#include <stdlib.h>
#include <gconio.h>

#include"View.c"
#include"Calculation.c"

/*---Menu Initial---------------------------------------------------*/
void main(){
	char option[2];

	do{
		viewMenu();//Chama a View do menu inicial
		gotoxy(3,12);
		printf("Informe a opção desejada: ");
		option[0]=getchar();

		switch (option[0]){
		case '1':
			scanf("%*c");
			gotoxy(3,13);
			printf("Opção 1 Escolhida Deseja Continuar? s/n: ");
			option[1]=getchar();

			switch (option[1])
			{
			case 's':
			case 'S':
				scanf("%*c");//Limpa o buffer do teclado
				system("clear");//Limpa a tela do terminal 

				gotoxy(25,2);//Matriz para posicionar o título da página
    			printf("Demissão Sem Justa Causa");
				viewOpcao();//Chama a View de tela padão
				DemissaoSemJustCaus();//Chama o calculo da opção desejada
				scanf("%*c");

				gotoxy(3,23);
				printf("Voltar ao Menu Inicial? s/n: ");
				option[2]=getchar();
				switch (option[2])
				{
				case 's':
				case 'S':
					break;
				case 'n':
				case 'N':
					system("clear");
					gotoxy(21,2);
					printf("Programa Encerrado Com Sucesso!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				default:
					gotoxy(3,24);
					printf("Opção Invalida!!\n");
					delay(2000);
					system("clear");
					gotoxy(27,2);
					printf("Programa Encerrado!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				}
				break;
			case 'n':
			case 'N':
				break;
			default:
				gotoxy(3,14);
				printf("Opção Invalida!!\n");
				delay(2000);
				break;
			}

			break;
		case '2':
			scanf("%*c");
			gotoxy(3,13);
			printf("Opção 2 Escolhida Deseja Continuar? s/n: ");
			option[1]=getchar();

			switch (option[1])
			{
			case 's':
			case 'S':
				scanf("%*c");
				system("clear");

				gotoxy(25,2);
    			printf("Demissão Com Justa Causa ");
				viewOpcao();
				DemissaoComJustCaus();
				scanf("%*c");
				
				gotoxy(3,23);
				printf("Voltar ao Menu Inicial? s/n: ");
				option[2]=getchar();
				switch (option[2])
				{
				case 's':
				case 'S':
					break;
				case 'n':
				case 'N':
					system("clear");
					gotoxy(21,2);
					printf("Programa Encerrado Com Sucesso!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				default:
					gotoxy(3,24);
					printf("Opção Invalida!!\n");
					delay(2000);
					system("clear");
					gotoxy(27,2);
					printf("Programa Encerrado!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
				}
				break;
			case 'n':
			case 'N':
				break;
			default:
				gotoxy(3,14);
				printf("Opção Invalida!!\n");
				delay(2000);
				break;
			}

			break;
		case '3':
			scanf("%*c");
			gotoxy(3,13);
			printf("Opção 3 Escolhida Deseja Continuar? s/n: ");
			option[1]=getchar();

			switch (option[1])
			{
			case 's':
			case 'S':
				scanf("%*c");
				system("clear");

				gotoxy(19,2);
    			printf("Pedido de Demissão Pelo Funcionário");
				viewOpcao();
				PedidoDeDemissao();
				scanf("%*c");

				gotoxy(3,23);
				printf("Voltar ao Menu Inicial? s/n: ");
				option[2]=getchar();
				switch (option[2])
				{
				case 's':
				case 'S':
					break;
				case 'n':
				case 'N':
					system("clear");
					gotoxy(21,2);
					printf("Programa Encerrado Com Sucesso!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				default:
					gotoxy(3,24);
					printf("Opção Invalida!!\n");
					delay(2000);
					system("clear");
					gotoxy(27,2);
					printf("Programa Encerrado!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
				}
				break;
			case 'n':
			case 'N':
				break;
			default:
				gotoxy(3,14);
				printf("Opção Invalida!!\n");
				delay(2000);
				break;
			}

			break;
		case '4':
			scanf("%*c");
			gotoxy(3,13);
			printf("Opção 4 Escolhida Deseja Continuar? s/n: ");
			option[1]=getchar();

			switch (option[1])
			{
			case 's':
			case 'S':
				scanf("%*c");
				system("clear");

				gotoxy(27,2);
    			printf("Acordo Entre Partes");
				viewOpcao();
				AcordoEntrePartes();
				scanf("%*c");

				gotoxy(3,23);
				printf("Voltar ao Menu Inicial? s/n: ");
				option[2]=getchar();
				switch (option[2])
				{
				case 's':
				case 'S':
					break;
				case 'n':
				case 'N':
					system("clear");
					gotoxy(21,2);
					printf("Programa Encerrado Com Sucesso!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				default:
					gotoxy(3,24);
					printf("Opção Invalida!!\n");
					delay(2000);
					system("clear");
					gotoxy(27,2);
					printf("Programa Encerrado!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
				}
				break;
			case 'n':
			case 'N':
				break;
			default:
				gotoxy(3,14);
				printf("Opção Invalida!!\n");
				delay(2000);
				break;
			}

			break;
		case '5':
			scanf("%*c");
			gotoxy(3,13);
			printf("Opção 5 Escolhida Deseja Continuar? s/n: ");
			option[1]=getchar();

			switch (option[1])
			{
			case 's':
			case 'S':
				scanf("%*c");
				system("clear");

				gotoxy(27,2);
    			printf("Rescisão Indireta");
				viewOpcao();
				RescisaoIndireta();
				scanf("%*c");

				gotoxy(3,23);
				printf("Voltar ao Menu Inicial? s/n: ");
				option[2]=getchar();
				switch (option[2])
				{
				case 's':
				case 'S':
					break;
				case 'n':
				case 'N':
					system("clear");
					gotoxy(21,2);
					printf("Programa Encerrado Com Sucesso!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				default:
					gotoxy(3,24);
					printf("Opção Invalida!!\n");
					delay(2000);
					system("clear");
					gotoxy(27,2);
					printf("Programa Encerrado!!\n");
					viewClosure();
					printf("\n\n");
					exit(0);
					break;
				}
				break;
			case 'n':
			case 'N':
				break;
			default:
				gotoxy(3,14);
				printf("Opção Invalida!!\n");
				delay(2000);
				break;
			}

			break;
		case '0':
			break;
		default:
			gotoxy(3,13);
			printf("Opção Invalida!!\n");
			delay(2000);
			break;
		}
		scanf("%*c");
      	system("clear");
	} while (option[0]!='0');
	system("clear");
	gotoxy(21,2);
	printf("Programa Encerrado Com Sucesso!!\n");
	viewClosure();
	printf("\n\n");
	exit(0);
}