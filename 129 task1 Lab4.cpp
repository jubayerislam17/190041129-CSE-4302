#include<bits/stdc++.h>
using namespace std;


class Calculator
{
private:
    int a;
    bool flag=false;

public:
    Calculator():a(0)
    {};
    Calculator(int val):a(val)
    {};


    void add(int Value)
    {
        a+=Value;
    }

    void substract(int Value)
    {
        a-=Value;
    }
    void multiply(int Value)
    {
        a*=Value;
    }

    void divideBy(int Value)
    {   if(Value) a/=Value;
        else{
            flag=true;
        }
    }

    void display()
    {
        if(flag) {cout<<"Error : divide by 0 is undefined"<<endl; flag=false;}
        else
            cout<<"Calculator display: "<<a<<endl;

    }

    void clear()
    {   a=0;
        display();

    }
    ~Calculator()
        {
            cout<<"Calculator object is destroyed"<<endl;
        }
};

main()
{   Calculator c(0);
    c.add(10);
    c.display();
    c.add(7);
    c.display();
    c.multiply(31);
    c.display();
    c.substract(42);
    c.display();
    c.divideBy(7);
    c.display();
    c.divideBy(0);
    c.display();
    c.add(3);
    c.display();
    c.substract(1);
    c.display();
    c.clear();
}
