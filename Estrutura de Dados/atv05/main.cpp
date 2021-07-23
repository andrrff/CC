#ifndef TRUE
  #define TRUE 1
#endif
#ifndef FALSE
  #define FALSE 0
#endif

#include <iostream>
using namespace std;

struct Node{
    void *e;
    Node *prox;
};

struct Pilha {
    Node *prim;
};

Pilha* criar();
Node* novoNo(void *e);
int destruirNo(Node *no);
int empilhar(Pilha *pilha, void *e);
void* desempilhar(Pilha *pilha);
int isEmpty(Pilha *pilha);
int destruir(Pilha pilha);

struct Aluno {
    string nome;
    float nota1, nota2; 
};

/*   Codificar as funÃ§Ãµes a partir daqui */

Pilha* criar() {
    Pilha *novaPilha = new Pilha();
    novaPilha->prim = NULL;
    return novaPilha;
}

Node* novoNo(void *e) {
    Node *no = new Node();
    no->e = e;
    no->prox = NULL;
}

int destruirNo(Node *no)
{
    delete no;
}

int empilhar(Pilha *pilha, void* e) {
    Node *atual;
    Node *novo;
    if (pilha != NULL) {
        novo = novoNo(e);
        if (pilha->prim == NULL) {
            pilha->prim = novo;
        } else {
            atual = pilha->prim;
            while(atual->prox != NULL) {
                atual = atual->prox;
            }
            atual->prox = novo;
        }
        return TRUE;
    }
    return FALSE;
}

void* desempilhar(Pilha *pilha)
{
    Node *atual = pilha->prim;
    if (pilha != NULL) {
        if (pilha->prim == NULL) {
            return pilha;
        } else {
            while(atual) {
                if(atual -> prox -> prox == NULL)
                {
                    atual -> prox = NULL;
                    break;
                }
                else
                    atual = atual->prox;
            }
        }
    }
}

int isEmpty(Pilha *pilha)
{
    Node *atual = pilha->prim;
    if (atual == NULL) {
        return TRUE;
    }
    else
        return FALSE;
}

int destruir(Pilha *pilha)
{
	Node *list = pilha -> prim;
	while(list) {
        list = NULL;
        delete list;
		list = list->prox;
	}
}


void display(struct Pilha *head) {
	Node *list = head -> prim;
	while(list) {
		cout << list-> e << " ";
		list = list->prox;
	}
	cout << endl;
	cout << endl;
}

int main()
{
    Pilha *pilha = criar();
    Aluno *aluno = new Aluno();
    aluno->nome = "Adriano";
    empilhar(pilha, aluno);
    empilhar(pilha, aluno);
    empilhar(pilha, aluno);
    desempilhar(pilha);
    destruirNo(pilha -> prim -> e);
    destruir(pilha);
    display(pilha);
    cout<<isEmpty(pilha)<<endl;

    return 0;
}
