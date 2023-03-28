#include <stdio.h>
#include <stdlib.h>
#include <gconio.h>

void main(){
	char option[2];

	do{
		printf("Informe a opção desejada: ");
		option[0]=getchar();

		switch (option[0]){
		case '1':
			scanf("%*c");
			printf("Opção 1 Escolhida Deseja Continuar? s/n: ");
			option[1]=getchar();

			switch (option[1])
			{
			case 's':
			case 'S':
				scanf("%*c");

				/*code*/

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
			printf("Opção 2\n");
			delay(2000);
			break;
		default:
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