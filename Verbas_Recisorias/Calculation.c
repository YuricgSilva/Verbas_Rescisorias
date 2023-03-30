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
  
float DemissaoSemJustCaus(){
    float 
    salario, dias_mes, saldo_salario,
    ferias_vencidas,decimo_terceiro,
    meses_trab,anos_trabalhados,
    aviso_previo,fgts,multa_fgts,total_sem;
    
    gotoxy(3,5);
    printf("Qual o valor do seu salário?: ");
    scanf("%f", &salario);
    gotoxy(3,7);
    printf("Quantos dias do mês você trabalhou?: ");
    scanf("%f", &dias_mes);
    gotoxy(3,9);
    printf("Quantos meses você trabalhou no ano?: ");
    scanf("%f", &meses_trab);
    gotoxy(3,11);
    printf("Quantos anos você trabalhou na empresa no total?: ");
    scanf("%f", &anos_trabalhados);

  
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    decimo_terceiro = (salario/12) * meses_trab;
    aviso_previo = (salario/30) * (30 + (3 * anos_trabalhados));
    fgts = (salario * 0.08) * (anos_trabalhados * 12);
    multa_fgts = fgts * (0.4);
    total_sem = saldo_salario + ferias_vencidas + decimo_terceiro + aviso_previo + multa_fgts;
    
    gotoxy(3,14);
    printf("Saldo de salário = R$ %.1f\n", saldo_salario);
    gotoxy(3,15);
    printf("Ferias_vencidas = R$ %.1f\n", ferias_vencidas);
    gotoxy(3,16);
    printf("Decimo terceiro proporcional = R$ %.1f\n", decimo_terceiro);
    gotoxy(3,17);
    printf("Aviso previo indenizado = R$ %.1f\n", aviso_previo);
    gotoxy(3,18);
    printf("Multa do fgts = R$ %.1f\n", multa_fgts);
    gotoxy(3,19);
    printf("Total a receber = R$ %.2f\n", total_sem);
}

float DemissaoComJustCaus(){
    float 
    salario, dias_mes, saldo_salario,
    ferias_vencidas, total;
    
    gotoxy(3,5);
    printf("Qual o valor do seu salário?: ");
    scanf("%f", &salario);

    gotoxy(3,7);
    printf("Quantos dias do mês você trabalhou?: ");
    scanf("%f", &dias_mes);
 
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    total = ferias_vencidas + saldo_salario;
 
    gotoxy(3,10);
    printf("Saldo de salário = R$ %.2f\n", saldo_salario);
    gotoxy(3,11);
    printf("Ferias vencidas = R$ %.2f\n", ferias_vencidas);
    gotoxy(3,12);
    printf("Total a receber = R$ %2.f\n", total);
}

float PedidoDeDemissao(){
    float 
    salario, dias_mes, saldo_salario,ferias_vencidas, 
    total,meses_trab,decimo_terceiro;

    gotoxy(3,5);
    printf("Qual o valor do seu salário?: ");
    scanf("%f", &salario);
    gotoxy(3,7);
    printf("Quantos dias do mês você trabalhou?: ");
    scanf("%f", &dias_mes);
    gotoxy(3,9);
    printf("Quantos meses você trabalhou no ano?: ");
    scanf("%f", &meses_trab);


    saldo_salario = (salario/30) * dias_mes;
    decimo_terceiro = (salario/12) * meses_trab;
    ferias_vencidas = salario + (salario/3);
    total = ferias_vencidas + saldo_salario + decimo_terceiro;

    gotoxy(3,12);
    printf("Saldo de salário = R$ %.2f\n", saldo_salario);
    gotoxy(3,13);
    printf("Ferias vencidas = R$ %.2f\n", ferias_vencidas);
    gotoxy(3,14);
    printf("Decimo terceiro proporcional = R$ %.1f\n", decimo_terceiro);
    gotoxy(3,15);
    printf("Total a receber = R$ %2.f\n", total);
}

float AcordoEntrePartes(){
    float 
    salario, dias_mes, saldo_salario,
    ferias_vencidas,decimo_terceiro,
    meses_trab,anos_trabalhados,
    aviso_previo,fgts,multa_fgts,total_sem;

    gotoxy(3,5);
    printf("Qual o valor do seu salário?: ");
    scanf("%f", &salario);
    gotoxy(3,7);
    printf("Quantos dias do mês você trabalhou?: ");
    scanf("%f", &dias_mes);
    gotoxy(3,9);
    printf("Quantos meses você trabalhou no ano?: ");
    scanf("%f", &meses_trab);
    gotoxy(3,11);
    printf("Quantos anos você trabalhou na empresa?: ");
    scanf("%f", &anos_trabalhados);

  
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    decimo_terceiro = (salario/12) * meses_trab;
    aviso_previo = ((salario/30) * (30 + (3 * anos_trabalhados)) / 2);
    fgts = (salario * 0.08) * (anos_trabalhados * 12);
    multa_fgts = fgts * (0.2);
    total_sem = saldo_salario + ferias_vencidas + decimo_terceiro + aviso_previo + multa_fgts;
    
    gotoxy(3,14);
    printf("Saldo de salário = R$ %.2f\n", saldo_salario);
    gotoxy(3,15);
    printf("Ferias vencidas = R$ %.2f\n", ferias_vencidas);
    gotoxy(3,16);
    printf("Decimo terceiro proporcional = R$ %.2f\n", decimo_terceiro);
    gotoxy(3,17);
    printf("Aviso previo indenizado = R$ %.2f\n", aviso_previo);
    gotoxy(3,18);
    printf("Multa do fgts = R$ %.2f\n", multa_fgts);
    gotoxy(3,19);
    printf("Total a receber = R$ %.2f\n", total_sem);
  
}

float RescisaoIndireta(){
    float 
    salario, dias_mes, saldo_salario,
    ferias_vencidas,decimo_terceiro,
    meses_trab,anos_trabalhados,
    aviso_previo,fgts,multa_fgts,total_sem;
    
    gotoxy(3,5);
    printf("Qual o valor do seu salário?: ");
    scanf("%f", &salario);
    gotoxy(3,7);
    printf("Quantos dias do mês você trabalhou?: ");
    scanf("%f", &dias_mes);
    gotoxy(3,9);
    printf("Quantos meses você trabalhou no ano?: ");
    scanf("%f", &meses_trab);
    gotoxy(3,11);
    printf("Quantos anos você trabalhou na empresa?: ");
    scanf("%f", &anos_trabalhados);

  
    saldo_salario = (salario/30) * dias_mes;
    ferias_vencidas = salario + (salario/3);
    decimo_terceiro = (salario/12) * meses_trab;
    aviso_previo = (salario/30) * (30 + (3 * anos_trabalhados));
    fgts = (salario * 0.08) * (anos_trabalhados * 12);
    multa_fgts = fgts * (0.4);
    total_sem = saldo_salario + ferias_vencidas + decimo_terceiro + aviso_previo + multa_fgts;

    gotoxy(3,14);
    printf("Saldo de salário = R$ %.2f\n", saldo_salario);
    gotoxy(3,15);
    printf("Ferias vencidas = R$ %.2f\n", ferias_vencidas);
    gotoxy(3,16);
    printf("Decimo terceiro proporcional = R$ %.2f\n", decimo_terceiro);
    gotoxy(3,17);
    printf("Aviso previo indenizado = R$ %.2f\n", aviso_previo);
    gotoxy(3,18);
    printf("Multa do fgts = R$ %.2f\n", multa_fgts);
    gotoxy(3,19);
    printf("Total a receber = R$ %.2f\n", total_sem);
}