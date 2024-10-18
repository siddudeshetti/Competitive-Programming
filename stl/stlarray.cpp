#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 8> a = {1, 2, 1, 3, 4, 2, 14, 5};
    array<int, 8> b = {1, 2, 4, 3, 4, 2, 1, 56};
    array<int, 5> c;
    // 1.at()
    for (int i = 0; i < 8; i++)
    {
        cout << a.at(i) << ' ';
    }
    cout << endl;
    // 2.get()
    cout << get<3>(a);
    cout << endl;
    // 3.[]
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    // 4.front()
    cout << a.front();
    cout << endl;
    // 5.back()
    cout << a.back();
    cout << endl;
    // 6.size()
    cout << a.size();
    cout << endl;
    // 7.max_size()
    cout << a.max_size();
    cout << endl;
    // 8.swap()
    a.swap(b);
    cout << endl;
    // 9.empty()
    if (a.empty())
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    cout << endl;
    // 10.fill()
    c.fill(0);
}
