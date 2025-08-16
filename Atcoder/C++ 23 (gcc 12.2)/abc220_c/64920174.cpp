#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Statixia ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    int size;
    cin >> size;
    ll sum = 0;
    vector<int> lol(size);
    for(auto &it : lol)
    {
        cin >> it;
        sum += it;
    }
    ll x;
    cin >> x;
    ll counter = (x / sum) * size;
    x -= ((x / sum) * sum);
    for (size_t i = 0; (i < size) and (x >= 0); i++)
    {
        x -= lol[i];
        counter++;
    }
    cout << counter;
    return 0;
}