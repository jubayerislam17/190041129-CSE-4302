#include <bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int count, step;

public:

    Counter(): count(0), step(1)
    {}

    void setIncrementStep(int step_val)
    {
        step=step_val;
    }

    void increment()
    {
        count=count+step;
    }

    int getCount()
    {
        return count;
    }

    void resetCount()
    {
        count=0;
    }
};

int main()
{
    Counter count;
    count.setIncrementStep(2);

    count.increment();
    cout<<count.getCount()<<'\n';

    count.resetCount();
    cout<<count.getCount();

    return 0;
}
