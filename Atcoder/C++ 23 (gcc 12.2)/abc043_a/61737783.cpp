#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int solve()
{
    int n;
    cin >> n;
    return n * (n + 1) / 2;
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