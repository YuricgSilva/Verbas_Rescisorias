#include<stdio.h>
#include<gconio.h>

#include"Controller.h"

   /*float main(void){
    //DemissaoComJustCaus();
    //DemissaoSemJustCaus();
    //PedidoDeDemissao();
    //AcordoEntrePartes();
    //RescisaoIndireta();
    
    return 0;
}*/
  
float DemissaoComJustCaus(){
    float salario, dias_mes, saldo_salario,ferias_vencidas, total;
    
    gotoxy(3,5);
    printf("Qual o valor do seu salario?: ");
    scanf("%f", &salario);

    gotoxy(3,7);
    printf("Quantos dias do mes voce trabalhou?: ");
    scanf("%f", &dias_mes);
 
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    total = ferias_vencidas + saldo_salario;
 
    gotoxy(3,9);
    printf("Saldo de salario = R$ %.2f\n", saldo_salario);
    gotoxy(3,10);
    printf("Ferias vencidas = R$ %.2f\n", ferias_vencidas);
    gotoxy(3,11);
    printf("Total a receber = R$ %2.f\n", total);
}

float DemissaoSemJustCaus(){
    float salario, dias_mes, saldo_salario,ferias_vencidas,decimo_terceiro,meses_trab,anos_trabalhados,aviso_previo,fgts,multa_fgts,total_sem;
    printf("Qual o valor do seu salario ? ");
    scanf("%f", &salario);
    printf("Quantos dias do mes voce trabalhou ? ");
    scanf("%f", &dias_mes);
    printf("Quantos meses você trabalhou no ano ? ");
    scanf("%f", &meses_trab);
    printf("Quantos anos você trabalhou na empresa no total ? ");
    scanf("%f", &anos_trabalhados);

  
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    decimo_terceiro = (salario/12) * meses_trab;
    aviso_previo = (salario/30) * (30 + (3 * anos_trabalhados));
    fgts = (salario * 0.08) * (anos_trabalhados * 12);
    multa_fgts = fgts * (0.4);
    total_sem = saldo_salario + ferias_vencidas + decimo_terceiro + aviso_previo + multa_fgts;
  
    printf("Saldo de salario = R$ %.1f\n", saldo_salario);
    printf("Ferias_vencidas = R$ %.1f\n", ferias_vencidas);
    printf("Decimo terceiro proporcional = R$ %.1f\n", decimo_terceiro);
    printf("Aviso previo indenizado = R$ %.1f\n", aviso_previo);
    printf("Multa do fgts = R$ %.1f\n", multa_fgts);
    printf("Total a receber = R$ %.2f\n,", total_sem);
}

float PedidoDeDemissao(){
    float salario, dias_mes, saldo_salario,ferias_vencidas, total,meses_trab,decimo_terceiro;
    printf("Qual o valor do seu salario ? ");
    scanf("%f", &salario);
    printf("Quantos dias do mes voce trabalhou ? ");
    scanf("%f", &dias_mes);
    printf("Quantos meses você trabalhou no ano ? ");
    scanf("%f", &meses_trab);


    saldo_salario = (salario/30) * dias_mes;
    decimo_terceiro = (salario/12) * meses_trab;
    ferias_vencidas = salario + (salario/3);
    total = ferias_vencidas + saldo_salario + decimo_terceiro;

    printf("Saldo de salario = R$ %.2f\n", saldo_salario);
    printf("Ferias vencidas = R$ %.2f\n", ferias_vencidas);
    printf("Decimo terceiro proporcional = R$ %.1f\n", decimo_terceiro);
    printf("Total a receber = R$ %2.f\n", total);
}

float AcordoEntrePartes(){
    float salario, dias_mes, saldo_salario,ferias_vencidas,decimo_terceiro,meses_trab,anos_trabalhados,aviso_previo,fgts,multa_fgts,total_sem;
    printf("Qual o valor do seu salario ? ");
    scanf("%f", &salario);
    printf("Quantos dias do mes voce trabalhou ? ");
    scanf("%f", &dias_mes);
    printf("Quantos meses você trabalhou no ano ? ");
    scanf("%f", &meses_trab);
    printf("Há quantos anos você trabalhou na empresa ? ");
    scanf("%f", &anos_trabalhados);

  
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    decimo_terceiro = (salario/12) * meses_trab;
    aviso_previo = ((salario/30) * (30 + (3 * anos_trabalhados)) / 2);
    fgts = (salario * 0.08) * (anos_trabalhados * 12);
    multa_fgts = fgts * (0.2);
    total_sem = saldo_salario + ferias_vencidas + decimo_terceiro + aviso_previo + multa_fgts;
  
    printf("Saldo de salario = R$ %.2f\n", saldo_salario);
    printf("Ferias_vencidas = R$ %.2f\n", ferias_vencidas);
    printf("Decimo terceiro proporcional = R$ %.2f\n", decimo_terceiro);
    printf("Aviso previo indenizado = R$ %.2f\n", aviso_previo);
    printf("Multa do fgts = R$ %.2f\n", multa_fgts);
    printf("Total a receber = R$ %.2f\n,", total_sem);
  
}

float RescisaoIndireta(){
    float salario, dias_mes, saldo_salario,ferias_vencidas,decimo_terceiro,meses_trab,anos_trabalhados,aviso_previo,fgts,multa_fgts,total_sem;
    printf("Qual o valor do seu salario ? ");
    scanf("%f", &salario);
    printf("Quantos dias do mes voce trabalhou ? ");
    scanf("%f", &dias_mes);
    printf("Quantos meses você trabalhou no ano ? ");
    scanf("%f", &meses_trab);
    printf("Há quantos anos você trabalhou na empresa ? ");
    scanf("%f", &anos_trabalhados);

  
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    decimo_terceiro = (salario/12) * meses_trab;
    aviso_previo = (salario/30) * (30 + (3 * anos_trabalhados));
    fgts = (salario * 0.08) * (anos_trabalhados * 12);
    multa_fgts = fgts * (0.4);
    total_sem = saldo_salario + ferias_vencidas + decimo_terceiro + aviso_previo + multa_fgts;

    printf("Saldo de salario = R$ %.2f\n", saldo_salario);
    printf("Ferias_vencidas = R$ %.2f\n", ferias_vencidas);
    printf("Decimo terceiro proporcional = R$ %.2f\n", decimo_terceiro);
    printf("Aviso previo indenizado = R$ %.2f\n", aviso_previo);
    printf("Multa do fgts = R$ %.2f\n", multa_fgts);
    printf("Total a receber = R$ %.2f\n,", total_sem);
}