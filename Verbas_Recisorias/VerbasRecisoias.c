#include <stdio.h>
#include <stdlib.h>
 
void main(){

   char opcao,opcao2,opcao3;
   do{
//-----Menu---------------------------------------------------------------------------------
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
      
      printf("\tInforme a Opção Desejada: ");
      opcao = getchar();

      switch(opcao){
         case '1':
            while(opcao2!='n'){
               printf("\t***********************************************************************\n");
               printf("\t*               Opção escolhida Demissão Sem Justa Calsa              *\n");
               printf("\t***********************************************************************\n");

               printf("\tDeseja Continuar? s/n: ");
               
               opcao2 = getchar();
               
               switch (opcao2){
                  case 's':
                     scanf("%*c");
                     system("clear");
                     /* code */

                     while (opcao3!='s'){
                        printf("\t***********************************************************************\n");
                        printf("\t*                       Voltar ao Menu Inicial?                       *\n");
                        printf("\t***********************************************************************\n");
                        printf("\tDigite s/n: ");
                        opcao3 = getchar();
                        switch (opcao3){
                           case 'n':
                              system("clear");
                              printf("Programa Encerrado!!\n");
                              exit(0);
                              break;
                        }
                     }
                     opcao2 = 'n';
                     break;
               }
               system("clear");
            }
            break;
         case '2':
            scanf("%*c");
            system("clear");
            printf("\t***********************************************************************\n");
            printf("\t*              Opção escolhida Demissão Com Justa Calsa               *\n");
            printf("\t***********************************************************************\n\n");

            break;
         case '3':
            scanf("%*c");
            system("clear");
            printf("\t***********************************************************************\n");
            printf("\t*        Opção escolhida Pedido de Demissão Pelo Funcionário          *\n");
            printf("\t***********************************************************************\n\n");

            break;
         case '4':
            scanf("%*c");
            system("clear");
            printf("\t***********************************************************************\n");
            printf("\t*                  Opção escolhida Acordo Entre Partes                *\n");
            printf("\t***********************************************************************\n\n");

            break;
         case '5':
            scanf("%*c");
            system("clear");
            printf("\t***********************************************************************\n");
            printf("\t*                 Opção escolhida Demissão Consensual                 *\n");
            printf("\t***********************************************************************\n\n");

            break;
         /*default:
            printf("\tERRO: Opção Não Cadastrada!!\n");
            break;*/
      }
      scanf("%*c");
      system("clear");
    } while (opcao!='0');
}