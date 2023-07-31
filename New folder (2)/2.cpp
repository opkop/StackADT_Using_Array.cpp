#include "1.cpp"
#include <iostream>
using namespace std;

class Stack : private Array
{
public:
    Stack(int);
    void push(int);
    int peek();
    void pop();
    ~Stack();
    virtual bool isFull();
    virtual bool isEmpty();
};
bool Stack::isEmpty()
{
    return (Array::isEmpty());
}
bool Stack::isFull()
{
    return (Array::isFull());
}
Stack::~Stack() {}
void Stack::pop()
{
    if (isEmpty())
        cout << "Stack is Underflow" << endl;
    else
        del(count() - 1);
}

int Stack::peek()
{
    if(!isEmpty())
       return (get(count() - 1));
    else
       cout<<"\n Stack is Empty";   
}

void Stack::push(int data)
{
    if (isFull())
        cout << "Stack is Overflow" << endl;
    else
        append(data);
}
Stack::Stack(int cap) : Array(cap)
{
}