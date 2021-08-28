#include <bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int count, step;
public:
    Counter(int s=1, int c=0): count(c), step(s)
    {}

    Counter(const Counter& c): count(0), step(c.step)
    {}

    Counter& operator=(const Counter& c)
    {
        count=c.count;
        step=1;
        return *this;
    }

    void setCount(int c)
    {
        count=c;
    }

    void setStep(int s)
    {
        step=s;
    }

    int getCount() 
    {
        return count;
    }

    int getStep() 
    {
        return step;
    }

 
};

class Restrict
{
private:
    int num;

    Restrict(const Restrict& n): num(n.num)
    {}

    Restrict& operator=(const Restrict& n)
    {
        num=n.num;
        return *this;
    }

public:
    Restrict(int n=0): num(n)
    {}

    int getvalue() 
    {
        return num;
    }
};

int main()
{
    Counter c1(5, 10);
    cout << c1.getCount() << endl;

    Counter c2(c1);
    cout << c2.getCount() << endl;

    Counter c3=c1;
    cout << c3.getCount() << endl;

    Counter c4;
    c4=c1;
    cout << c4.getCount() << endl;

    /*  Restrict n1(5);
        Restrict n2(n1), n3=n1; //This will cause an error.
        Restrict n4;
        n4=n1; //This will cause an error.
    */

    return 0;
}
