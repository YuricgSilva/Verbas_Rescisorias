#include<stdio.h>
#include<gconio.h>

#include"Controller.h"

/*void main(){
    clrscr();
    viewMenu();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}*/

//--Menu Main------------------------------------------
int viewMenu(){
//--Barra Superior-------------------------------------
    int x[10],y[10];
    for(x[0]=1;x[0]<73;x[0]++){
        gotoxy(x[0],1);
        printf("*");
    }
  
//--Barra Inferior-------------------------------------
    for(x[1]=1;x[1]<73;x[1]++){
        gotoxy(x[1],15);
        printf("*");
    }
//--Barra Do Meio--------------------------------------
    for(x[2]=2;x[2]<73;x[2]++){
        gotoxy(x[2],3);
        printf("*");
    }
  
//--Barra Lateral Esquerda-----------------------------
    for(y[0]=2;y[0]<15;y[0]++){
        gotoxy(1,y[0]);
        printf("*");
    }
 
//--Barra Lateral Direita------------------------------
    for(y[1]=2;y[1]<15;y[1]++){
        gotoxy(72,y[1]);
        printf("*");
    }
//--Titulo---------------------------------------------
    gotoxy(36,2);
    printf("MENU");
 
//--Opções Do Menu-------------------------------------
    gotoxy(3,5);
    printf("1-Demissão Sem Justa Causa");
    gotoxy(3,7);
    printf("2-Demissão Com Justa Causa");
    gotoxy(3,9);
    printf("3-Pedido de Demissão Pelo Funcionário");
 
    gotoxy(50,5);
    printf("4-Acordo Entre Partes");
    gotoxy(50,7);
    printf("5-Rescisão Indireta");
    gotoxy(50,9);
    printf("0-Sair do Programa");
    return 0;
}

//--Screen Option 1------------------------------------
int viewOpcao1(){
//--Barra Superior-------------------------------------
    int x[10],y[10];
    for(x[0]=1;x[0]<73;x[0]++){
        gotoxy(x[0],1);
        printf("*");
    }
  
//--Barra Inferior-------------------------------------
    for(x[1]=1;x[1]<73;x[1]++){
        gotoxy(x[1],25);
        printf("*");
    }
//--Barra Do Meio--------------------------------------
    for(x[2]=2;x[2]<73;x[2]++){
        gotoxy(x[2],3);
        printf("*");
    }
  
//--Barra Lateral Esquerda-----------------------------
    for(y[0]=2;y[0]<25;y[0]++){
        gotoxy(1,y[0]);
        printf("*");
    }
 
//--Barra Lateral Direita------------------------------
    for(y[1]=2;y[1]<25;y[1]++){
        gotoxy(72,y[1]);
        printf("*");
    }
    return 0;
}

/*--Screen Option 3------------------------------------
    gotoxy(25,2);
    printf("Demissão Com Justa Causa ");*/

/*--Screen Option 3------------------------------------
    gotoxy(19,2);
    printf("Pedido de Demissão Pelo Funcionário");*/

/*--Screen Option 4------------------------------------
    gotoxy(27,2);
    printf("Acordo Entre Partes");*/

/*--Screen Option 5------------------------------------
    gotoxy(27,2);
    printf("Rescisão Indireta");*/