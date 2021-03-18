#ifndef  LIB_H
#define  LIB_H
 
#include<stdio.h>
#include<ctype.h>
 
 
#define clrscr() printf("\e[1;1H\e[2J")
 
struct
{
    char name[20];
    int codbarra;    
    int preco;
    int custo;
}typedef TProduto;
 
TProduto listaProdutos[10];
 
void painel();
void cadastrar();
void lista();
 
#endif
