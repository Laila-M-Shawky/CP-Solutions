#include <bits/stdc++.h>
using namespace std;
#define Statixia ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll testcases = 1;

void solve()
{
    int size;
    cin >> size;
    vector<int> lol(size);
    for (auto & it : lol)
    {
        cin >> it;
    }
    for (size_t i = 0; i < size - 1; i++)
    {
        cout << lol[i] * lol[i + 1] << ' ';
    }
    
}

int main()
{
    Statixia
    //cin >> testcases;
    while (testcases--)
    {
        solve();
    }
    return 0;
}