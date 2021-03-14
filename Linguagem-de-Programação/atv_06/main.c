#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
 
#define MAXCHAR 1000
 
struct Telefone
{
    char nome[20];
    int numero;
}Agenda;
 
int system_menu()
{
    int option;
    system("cls");
    printf("++++++++++++++++++++++++++++\n");
    printf("1====ADICIONAR CONTATO=====+\n");
    printf("2=========LISTAR===========+\n");
    printf("++++++++++++++++++++++++++++\n");
    printf("\n\nEscolha uma opcao:\n>>");
    scanf("%i", &option);
    system("cls");
    return option;
}
 
int main()
{
 
    FILE *fp;   /* file pointer*/
    char continua_ou_nao = 'S';
    int opcao;
 
    // Criando ou abrindo o arquivo agenda.txt
    fp=fopen("Agenda.txt","w");
    // Checar se o arquivo foi criado
    if(fp==NULL)
    {
        printf("Arquivo não existe!!!");
        exit(0); // O programa acaba aqui
    }
 
    //! Funções com sistemas    
    do
    {
        int option = system_menu();
        switch (option)
        {
            case 1:
                printf("Insira o nome:\n>>");
                scanf("%s", Agenda.nome);
                fprintf(fp, "Nome: %s", Agenda.nome);
                printf("Insira o numero:\n>>");
                scanf("%i", &Agenda.numero);
                fprintf(fp, "\nNumero: %i", Agenda.numero);
                fprintf(fp, "\n========================\n");
                break;
 
            case 2:
                continua_ou_nao = 'N';
                break;
 
            default:
                printf("A opcao (%i) não existe!!!\n TENTE NOVAMENTE", opcao);
                break;
        }
    }while(toupper(continua_ou_nao) != 'N');
 
    //! Fim de funções
 
    printf("Arquivo criado com sucesso.");
    //Escrevendo dados no agenda.txt.
 
    printf("\nDados escritos com sucesso.");
    fclose(fp);
 
    /*again open file to read data*/
    fp=fopen("Agenda.txt","r");
    if(fp==NULL)
    {
        printf("\nO arquivo não pode ser aberto!!!");
        exit(0);
    }
 
    system("cls");
        char str[MAXCHAR];
        printf("\nConteudo de agenda.txt:\n");
        while (fgets(str, MAXCHAR, fp) != NULL)
            printf("%s", str);
 
    fclose(fp);
    return 0;
}

