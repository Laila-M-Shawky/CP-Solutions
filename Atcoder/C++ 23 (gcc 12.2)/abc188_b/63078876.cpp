#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll testcases = 1;

ll solve(long long x[], ll indxX, long long y[], ll indxY, ll size)
{
    if (indxX == size - 1)
    {
        return x[indxX] * y[indxY];
    }
    return x[indxX++] * y[indxY++] + solve( x, indxX, y, indxY, size);
}

int main()
{
    fast_io
    ll size;
    cin >> size;
    long long lol[size], lol2[size];
    for (auto & it : lol)
    {
        cin >> it;
    }
    for (auto & it : lol2)
    {
        cin >> it;
    }
    ll sum = solve(lol, 0, lol2, 0, size);
    cout << ( sum == 0 ? "Yes\n" : "No\n");
    return 0;
}