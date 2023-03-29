#include <stdio.h>
#include <stdlib.h>
#include <gconio.h>

#include"View.c"
#include"Calculation.c"

void main(){
	char option[2];

	do{
		viewMenu();
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
				scanf("%*c");
				system("clear");

				gotoxy(25,2);
    			printf("Demissão Sem Justa Causa");
				viewOpcao1();
				DemissaoComJustCaus();
				scanf("%*c");

				gotoxy(3,13);
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
					printf("Programa Encerrado Com Sucesso!!\n");
					exit(0);
					break;
				default:
					system("clear");
					printf("Opção Invalida!!\n");
					exit(0);
					break;
				}
				break;
			case 'n':
			case 'N':
				break;
			default:
				printf("Opção Invalida!!\n");
				delay(2000);
				break;
			}

			break;
		case '2':
			gotoxy(3,13);
			printf("Opção 2\n");
			delay(2000);
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
	printf("Programa Encerrado Com Sucesso!!\n");
	exit(0);
}