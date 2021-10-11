#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], j=0;
    set<int> s;
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            a[j] = i;
            j++;
        }
        else
            s.insert(i);
    }
    //    for(int i:a) cout << i << endl;
    //    for(int i:s) cout << i << endl;

    vector<int> v(20);
    merge(a, a + 10, s.begin(), s.end(), v.begin());

    for (auto i : v)
        cout << i << ' ';
}
