#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    cout << a << ' ' << b << ' ' << c;
}

int main()
{
    IO
    int testcases = 1;
    //cin >> testcases;
    while (testcases--)
    {
        solve();
    }
    return 0;
}