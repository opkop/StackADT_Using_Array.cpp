#include "2.cpp"
#include <iostream>
using namespace std;

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout << s.peek() << endl;
    s.push(50);
    s.push(60);
    cout << s.isEmpty() << endl;
    cout << s.isFull();
    s.~Stack();
    cout << s.peek() << endl;
}