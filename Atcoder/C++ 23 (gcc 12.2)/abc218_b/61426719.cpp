//todo 2/40
//? a --> 97  --> 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    for (size_t i = 0; i < 26; i++)
    {
        cin >> n;
        cout << char(96 + n);
    }
    return 0;
}