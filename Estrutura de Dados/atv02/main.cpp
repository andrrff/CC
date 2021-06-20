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

void inserir(Lista *lista, int valor) {
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

int main()
{
    Lista *lista;
    lista = criarLista();
    inserir(lista, 10);
    inserir(lista, 20);
    inserir(lista, 40);
    inserirIndice(lista, 3, 1);
    cout<<lista -> prim -> elemento << endl;
    cout<<lista -> prim -> prox -> elemento << endl;
    cout<<lista -> prim -> prox -> prox -> elemento << endl;
    cout<<lista -> prim -> prox -> prox -> prox -> elemento << endl;
    cout<<lista -> prim -> prox -> prox -> prox -> prox -> elemento << endl;
    //uma forma de imprimir a lista
    destruirLista(lista);
    retur
