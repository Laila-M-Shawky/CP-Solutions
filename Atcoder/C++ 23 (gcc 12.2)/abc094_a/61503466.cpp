#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    (x >= a && x <= (a + b)) ? cout << "YES" : cout << "NO";
    return 0;
}