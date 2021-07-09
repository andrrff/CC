#include<iostream>
using namespace std;
  
#define MAX 1000 //Quantidade maxima de elementos dentro da pilha
  
class Stack
{
    int top;
    public:
    int myStack[MAX]; //pilha de arrays
    
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

//pushes elementos dentro da pilha
bool Stack::push(int item)
{
    if (top >= (MAX-1)) 
    {
        cout << "Stack Overflow!!!";
        return false;
    }
    else 
    {
        myStack[++top] = item;
        cout<<item<<endl;
        return true;
    }
}
  
//removes ou pops elementos fora da fila, seguindo a logica do FIFO
int Stack::pop()
{
    if (top < 0) 
    {
        cout << "Stack Underflow!!";
        return 0;
    }
    else 
    {
        int item = myStack[top--];
        return item;
    }
}
  
//Checar se a pilha está vázia
bool Stack::isEmpty()
{
    return (top < 0);
}
  
int main()
{
    class Stack stack;
    cout<<"Push "<<endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout<<"Pop : "<<endl;
    while(!stack.isEmpty())
        cout<<stack.pop()<<endl;
    //Exemplo de Overflow de pilha com o retorno de `0`
    cout<<stack.pop()<<endl;
    return 0;
}
