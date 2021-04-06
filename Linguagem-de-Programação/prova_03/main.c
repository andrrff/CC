#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu_c=0, menu_pesquisarC=0, qtdeNumero=0;
char novoContato, verAgenda;
char pesquisarNomeC[40];

void data_hora();
void menu_inicial();
void cadastro_contato();
void ver_agenda();
void pesquisar_contato();

struct agenda 
{
       char nomeC[40];
       char telefone[20];
};
typedef struct agenda agenda;

agenda cli;
char *nomes;
int main()   
{      
       system("title AGENDA DE CONTATOS");
       menu_inicial();         
}

void data_hora()
{
     for(int i=0; i < 80; i++)
          {
               printf("\xC4");
          }
          system("date/t");
          printf("\t\t\t\t\t\t\t\t\t  ");
          system("time/t");
          for(int i=0; i < 80; i++)
          {
               printf("\xC4");
          }
}

void menu_inicial()
{        
         printf("\n\t\t\t          Agenda\n\n");
         data_hora();

         printf("\n\n\n");
         printf("\t\t\t\xDA");
         for(int i=0; i < 30; i++)
             {
             printf("\xC4");
             }
         printf("\xBF\n");  
         printf("\t\t\t\xB3  1. Cadastrar novo agenda    \xB3\n");
         printf("\t\t\t\xB3  2. Ver contatos cadastrados \xB3\n");
         printf("\t\t\t\xB3  3. Pesquisar agenda         \xB3\n");
         printf("\t\t\t\xB3  4. Sair                     \xB3\n");
         printf("\t\t\t\xC0");
         for(int i=0; i < 30; i++)
         {
         printf("\xC4");
         }
         printf("\xD9\n");
         printf("\n\t\t\t          Op%c%co: ", 135, 198);
         scanf("%c", &menu_c);
         fflush(stdin);
         system ("cls");

         switch (menu_c)
         {
                case '1':
                     cadastro_contato();
                     break;
                case '2':
                     ver_agenda();
                     break;
                case '3':
                     pesquisar_contato();
                     break;
                case '4':
                     break;
         }
}

void cadastro_contato()
{     
          FILE *data;     
          printf("\n\t\t\t      CADASTRAR NOVO CLIENTES\n\n");
          data_hora();

          printf("\nNome: ");
          gets(cli.nomeC);
          fflush(stdin);
          printf("\nTelefone: ");
          gets(cli.telefone);
          fflush(stdin);

          data = fopen("agenda.txt", "a+"); // abre o arquivo
          fprintf(data, "Nome: %s\n\n", cli.nomeC);
          fprintf(data, "Telefone: %s\n", cli.telefone);
          fprintf(data, "========================\n\n");
          fclose(data);

          printf("\n\nCliente cadastrado com sucesso!\n");  
        //   sleep(300);                                      
          printf("\nDeseja cadastrar outro agenda? <S/N>  ");
          scanf("%c",&novoContato); 
          fflush(stdin);
          if (novoContato == 'S' || novoContato == 's')
          {
                        system("cls");
                        cadastro_contato();
          }
          else
          {  
                        system("cls");
                        menu_inicial();
          }
          system("pause>NULL");
}

void ver_agenda()
{
    FILE *dataAgenda;
    char dados[100];
    char *agenda;

               printf("\n\t\t\t       CLIENTES CADASTRADOS\n\n");
               data_hora();
               dataAgenda = fopen("agenda.txt", "r");

               if (dataAgenda == NULL)
               {
                   printf("\n\nNao existem clientes cadastrados!");
                   printf("\n\n\n\n\n******** DIGITE QUALQUER TECLA PARA VOLTAR ********");
                   system("pause>NULL");
                   system("cls");
                   menu_inicial(); 

               }
               else
               {
                   printf("\nDeseja ver os dados da agenda? <S/N>  ");
                   fflush(stdin);
                   scanf("%c", &verAgenda);
                   fflush(stdin);
                   printf("\n\n");
                    if (verAgenda == 'S' || verAgenda == 's')
                    { //INICIO 5º IF - PARA A SAIDA DOS CADASTROS
                                 while (!feof(dataAgenda))
                                 {
                                 agenda = fgets(dados, 100, dataAgenda);
                                 printf("%s", dados);
                                 }
                                 printf("\n\n\n\n\n******** DIGITE QUALQUER TECLA PARA VOLTAR ********");
                                 system("pause>NULL");
                                 system("cls");
                                 menu_inicial();
                    }
                    else
                    {
                                system("cls");
                                menu_inicial();
                    }
                }
}

void pesquisar_contato()
{
     FILE *busca;
     char dadosB[100];
     char *agenda;

          busca = fopen("agenda.txt", "r");
          printf("\n\t\t\t      PESQUISAR POR NOME\n\n");
          data_hora();

          printf("\nDigite o nome a ser pesquisado: ");
          gets(pesquisarNomeC);
          fflush(stdin);
          fseek(busca, sizeof(struct agenda), SEEK_SET);

          while (!feof(busca))
             {
                              if(strcmp(cli.nomeC, pesquisarNomeC)==0)
                              {
                                agenda = fgets(dadosB, 100, busca);
                                 printf("%s", dadosB);
                              }                              
             }                      
          printf("\n\n******** DIGITE QUALQUER TECLA PARA VOLTAR ********");
          system("pause>NULL");
          system("cls");
          pesquisar_contato();
          if (strcmp(cli.nomeC, pesquisarNomeC)!=0)
          {
                        printf("\n\nContato nao encontrado :/");
                        printf("\n\n******** DIGITE QUALQUER TECLA PARA VOLTAR ********");
                        system("pause>NULL");
                        system("cls");
                        pesquisar_contato();
          }

}
