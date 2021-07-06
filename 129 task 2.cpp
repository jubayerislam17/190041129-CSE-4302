#include <bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int a, b;

public:
    void assign(int numerator,int denominator)
    {
        if(!denominator)
        {
            cout << "MATH ERROR!\n";
            return;
        }

        a=numerator;
        b=denominator;
    }

    double convert()
    {
        return (a*1.0)/b;
    }

    void invert()
    {
        if(!a)
        {
            cout << "MATH ERROR!\n";
            return;
        }

        swap(a,b);
    }

    void print()
    {
        cout<<"The Rational Number is "<<a<<'/'<<b;
    }
};

int main()
{
    RationalNumber r;

    r.assign(3,2);
    cout<<r.convert()<<'\n';

    r.invert();
    r.print();

    return 0;
}
