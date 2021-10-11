#include <bits/stdc++.h>
using namespace std;

const int MAX = 3;

template <class T>
class Stack
{
private:
    T st[MAX]; //array of Types
    int top;   //index of top of stack
public:
    class Full //exception class for Stack if full
    {          //note: empty class body
    };
    class Empty //exception class for Stack if empty
    {
    };
    Stack() : top(-1){}  //constructor

    void push(T var)
    {
        if (top >= MAX - 1) //if stack full,
            throw Full();   //throw exception
        st[++top] = var;    //put number on stack
    }

    T pop()
    {
        if (top < 0)       //if stack empty,
            throw Empty(); //throw exception
        return st[top--];  //take number off stack
    }
    T peek()
    {
        if (top < 0)       //if stack empty,
            throw Empty(); //throw exception
        return st[0];
    }
};

int main()
{
    Stack<float> s1;
    try
    {
        s1.push(1.1);
        s1.push(2.1);
        s1.push(3.3);
        cout << s1.pop() << endl;
        cout << s1.peek() << endl;
        s1.push(4.5);
        s1.push(5.5);
        cout << s1.peek() << endl;
    }
    catch (Stack<float>::Full) //exception handler
    {
        cout << "Exception : Stack Full " << endl;
    }
    catch (Stack<float>::Empty) //exception handler
    {
        cout << "Exception : Stack Empty " << endl;
    }
    cout << " normal exit" << endl;
    return 0;
}