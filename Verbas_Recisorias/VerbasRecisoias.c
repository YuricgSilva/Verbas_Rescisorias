#include <stdio.h>
#include <gconio.h>
 
void main(){
 
    printf("\t***********************************************************************\n");
    printf("\t*                          VERBAS RESCISÓRIAS                         *\n");
    printf("\t***********************************************************************\n");
    printf("\t*                                 MENU                                *\n");
    printf("\t*                                                                     *\n");
    printf("\t* 1-Demissão Sem Justa Calsa                    4-Acordo Entre Partes *\n");
    printf("\t* 2-Demissão Com Justa Calsa                    5-Demissão Consensual *\n");
    printf("\t* 3-Pedido de Demissão Pelo Funcionário         0-Sair do Programa    *\n");
    printf("\t*                                                                     *\n");
    printf("\t***********************************************************************\n\n");
 
    char ch;
 
    printf("\tInforme a Opção Desejada: ");
    ch = getchar();
 
 //-----Menu---------------------------------------------------------------------------------

    switch(ch){
       case '1':
          printf("\tCálculo função 1\n");
          printf("FIM");
          break;
       case '2':
          printf("\tCálculo função 2\n");
          printf("FIM");
          break;
       case '3':
          printf("\tCálculo função 3\n");
          printf("FIM");
          break;
       case '4':
          printf("\tCálculo função 4\n");
          printf("FIM");
          break;
       case '5':
          printf("\tCálculo função 5\n");
          printf("FIM");
          break;
       case '0':
          printf("\tSaio do Programa!!\n");
          printf("FIM");
          break;
       default:
          textcolor(RED);
          printf("\tERRO: Opção Não Cadastrada!!\n");
    }
}
