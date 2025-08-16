#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

string solve()
{
    int n, m;
    cin >> n >> m;
    return (n == m) ? "Yes" : "No" ;
}

int main()
{
    IO
    int testcases = 1;
    //cin >> testcases;
    while (testcases--)
    {
        cout << solve() << '\n';
    }
    return 0;
}