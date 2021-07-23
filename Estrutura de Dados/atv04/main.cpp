#include <iostream>
using namespace std;

typedef struct _node {
    int elemento;
    struct _node *prox;
} Node;

typedef struct _lista {
    Node *prim;
} Lista;

Lista* criarLista() {
    Lista *lista;
    lista = new Lista();
    lista->prim = 0;
    return lista;
}

Node *criarNo(int valor) {
    Node *no = new Node;
    no->elemento = valor;
    no->prox = 0;
}

void destruirLista(Lista *lista){
     //deletar todos os nos da lista antes de apagar a lista
    delete lista;
}

void inserirInicio(Lista *lista, int valor) {
    Node *no = criarNo(valor);
    Node *atual;
    if (lista->prim == 0) {
        lista->prim = no;
    }
    //CASO 2
    else
    {
        atual = lista -> prim;
        while(atual -> prox != 0)
        {
            atual = atual -> prox;
        }
        atual -> prox  = no;
    }
    //Um ponteiro para o No atual
    //para verificar se existe um proximo elemento
    //se exite, o no atual passa a ser o proximo
    //Quando não existir proximo atual->proximo = no
}

void inserirFim(Lista *lista, int valor) {
    //CASO 1
    Node *no = criarNo(valor);
    Node *atual;
    if (lista->prim == 0) {
        lista->prim = no;
    }
    //CASO 2
    else
    {
        atual = lista -> prim;
        while(atual -> prox != 0)
        {
            atual = atual -> prox;
        }
        atual -> prox = no;
    }
    //Um ponteiro para o No atual
    //para verificar se existe um proximo elemento
    //se exite, o no atual passa a ser o proximo
    //Quando não existir proximo atual->proximo = no
}

void inserirIndice(Lista *lista, int valor, int indice)
{
    Node *no = criarNo(valor);
    Node *atual;
    if (lista->prim == 0) {
        lista->prim = no;
    }
    else
    {
        atual = lista -> prim;
        while(indice < 0 + 1)
        {
            atual = atual -> prox;
            indice--;
        }
        atual -> prox = no;
    }
}

int pegarValorDeNo(Lista *lista, int indice)
{
    Node *atual;
    atual = lista -> prim;
    if(indice == 0)
    {
        return lista -> prim -> elemento;
    }
    while(indice > 0)
    {
        atual = atual -> prox;
        indice--;
    }
    return atual -> elemento;
}

int procurarPorUmValor(Lista *lista, int valor)
{
    Node *atual;
    atual = lista -> prim;
    int no = 1;
    while(1)
    {
        if(atual -> elemento == valor)
        {
            return no;
        }
        atual = atual -> prox;
        no++;
    }
    return no;
}

int contadorDeNos(Lista *lista)
{
    Node *atual;
    atual = lista -> prim;
    int no = 1;
    while(atual -> prox != 0)
    {
        atual = atual -> prox;
        no++;
    }
    return no;
}

bool ordem(Lista* lista)
{
    Node *atual;
    atual = lista -> prim;
    while(atual -> prox -> elemento > atual -> prox -> prox -> elemento)
    {
        return false;
    }
    return true;
}

void deletarPrimeiro(Lista *lista)
{
    Node *atual;
    atual = lista -> prim;
    lista -> prim = atual -> prox;
}

void deletarUltimo(Lista *lista)
{
    Node *atual;
    atual = lista -> prim;
    while(atual -> prox -> prox != 0)
    {
        atual = atual -> prox;
    }
    atual -> prox = NULL;
}

void imprimirNode(Lista* lista)
{
    Node *atual;
    atual = lista -> prim;
    if (lista -> prim -> prox == 0) {
        cout<<"Elemento: "<<atual -> elemento<<endl;
    }
    else
    {
        while(atual != 0)
        {
            cout<<"Elemento: "<<atual -> elemento<<endl;
            atual = atual -> prox;
        }
    }
}

void interface(Lista* lista)
{
    //!Interface deve conter:
    // Inserir no início
    // Inserir no fim
    // Remover primeiro
    // Remover ultimo
    // Contar elementos
    // Listar números
    // Pesquisar por um número na lista (apenas informar se achou ou não)
    // Encerrar programa
    cout<<"==========================="<<endl;
    cout<<"+===Escolha uma opcao:====+"<<endl;
    cout<<"+_________________________+"<<endl;
    cout<<"1 - Inserir no inicio"<<endl;
    cout<<"2 - Inserir no fim"<<endl;
    cout<<"3 - Remover primeiro"<<endl;
    cout<<"4 - Remover ultimo"<<endl;
    cout<<"5 - Contar elementos"<<endl;
    cout<<"6 - Listar numeros"<<endl;
    cout<<"7 - Pesquisar por um numero na lista (apenas informar se achou ou nao)"<<endl;
    cout<<"8 - Encerrar programa"<<endl;
    cout<<"+=========================+"<<endl;
    int opcao;
    int value;
    cin>>opcao;
    switch (opcao)
    {
        case 1:
            cout<<"Qual valor que deseja adicionar?"<<endl;
            cin>>value;
            system("clear");
            inserirInicio(lista, value);
            interface(lista);
        case 2:
            cout<<"Qual valor que deseja adicionar?"<<endl;
            cin>>value;
            system("clear");
            inserirFim(lista, value);
            interface(lista);
        case 3:
            system("clear");
            deletarPrimeiro(lista);
            interface(lista);
        case 4:
            system("clear");
            deletarUltimo(lista);
            interface(lista);
        case 5:
            system("clear");
            cout<<contadorDeNos(lista)<<endl;
            interface(lista);
        case 6:
            system("clear");
            imprimirNode(lista);
            interface(lista);
        case 7:
            system("clear");
            cout<<"Qual valor que deseja procurar?"<<endl;
            cin>>value;
            cout<<procurarPorUmValor(lista, value)<<endl;
            interface(lista);
        case 8:
            break;
        default:
            system("clear");
            cout<<"Valor inexistente T_T\nTente novamente!"<<endl;
            interface(lista);
    }
}

int main()
{
    Lista *lista;
    lista = criarLista();
    interface(lista);
    destruirLista(lista);
    return 0;
}
