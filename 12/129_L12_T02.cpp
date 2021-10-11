#include <bits/stdc++.h>
using namespace std;

template <class T>
T amax(T *arr, int size, int n)
{
    T cpr[size];
    copy(arr, arr + size, cpr);
    sort(cpr, cpr + size, greater<T>());

    return cpr[n - 1];
}

int main()
{
    int x;
    double arr2[5];
    
    for (int j = 0; j < 5; j++) //insert elements
    {
        arr2[j] = j * 1.5;
    }
    for (int j = 0; j < 5; j++) //display elements
    {
        cout << arr2[j] << endl;
    }

    cout << "Enter which largest no : ";
    cin >> x;
    cout << "The " << x << "th largest element is " << amax(arr2, 5, x) << endl;

    return 0;
}
