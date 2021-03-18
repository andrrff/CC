#include "lib.h"
 
void painel()
{
    int change;
    do
    {
        printf("###########################################\n");
        printf("#________________PRODUTOS_________________#\n");
        printf("#_____________1 - Cadastrar_______________#\n");
        printf("#_____________2 - Ver Lista_______________#\n");
        printf("#_____________3 - Sair____________________#\n");
        printf("#_________________________________________#\n");
        printf("###########################################\n");
        printf("Escolher\n>> ");
        scanf("%i", &change);
        clrscr();
        switch (change)
        {
            case 1:
                cadastrar();
                break;
            case 2:
                lista();
                break;
            case 3:
                break;
 
            default:
                painel();
                break;
        }
    }while(change != 3);
}
 
void cadastrar(){
    char sim_ou_nao;
    for(int i = 0; i < 10 && toupper(sim_ou_nao) != 'N'; i++)
    {
        printf("Insira um nome:\n>> ");
        scanf("%s", &listaProdutos[i].name);
        clrscr();
        printf("Digite o Codigo de Barra do %s:\n>> ", listaProdutos[i].name);
        scanf("%i", &listaProdutos[i].codbarra);
        clrscr();
        printf("Digite o Custo do %s:\n>> ", listaProdutos[i].name);
        scanf("%i", &listaProdutos[i].custo);
        clrscr();
        printf("Digite o Preco do %s:\n>> ", listaProdutos[i].name);
        scanf("%i", &listaProdutos[i].preco);
        clrscr();
        printf("Deseja cadastrar mais? \"Any_key/N\"\n>> ");
        scanf("%s", &sim_ou_nao);
    }
    painel();
}
 
void lista()
{
    for(int i = 0; i < 10; i++)
    {
        printf("Nome: %s\nCod.de Barra: %i\nCusto: %i\nPreco: %i\n======================\n\n", listaProdutos[i].name, listaProdutos[i].codbarra, listaProdutos[i].custo, listaProdutos[i].preco);
    }
}
