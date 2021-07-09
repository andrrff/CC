#include <iostream>
using namespace std;
  
// class para representar a stack node
class StackNode 
{
    public:
    int element;
    StackNode* next;
};
  
StackNode* newNode(int element) 
{
    StackNode* stackNode = new StackNode();
    stackNode -> element = element;
    stackNode -> next = NULL;
    return stackNode;
}

//Checar se o stack node está vazio
int isEmpty(StackNode *root) 
{
    return !root;
}
  
//Push ou Add elemento dentro da stack
void push(StackNode** root, int new_element)
{
    StackNode* stackNode = newNode(new_element);
    stackNode -> next = *root;
    *root = stackNode;
    cout << new_element << endl;
}
  
//Pop ou Remove elemento dentro da stack
int pop(StackNode** root)
{
    if (isEmpty(*root))
        return -1;

    StackNode* temp = *root;
    *root = (*root) -> next;
    int popped = temp -> element;
    free(temp);
  
    return popped;
}

//Função para checagem de valores dentro do stack node
int peek(StackNode* root)
{
    if (isEmpty(root))
        return -1;
    return root -> element;
}
  
int main()
{
    StackNode* root = NULL;
    cout << "fn(Push):" << endl;
    push(&root, 100);
    push(&root, 200);
    push(&root, 300);
    cout << "\nPrimeiro elemento da pilha: " << peek(root) << endl;
    cout << "\nfn(Pop):" << endl;

    while(!isEmpty(root))
        cout << pop(&root) << endl;
  
    cout << "Primeiro elemento da pilha: " << peek(root) << endl;
    
    return 0;
}
