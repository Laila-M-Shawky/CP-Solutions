#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Statixia ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

void solve()
{

}

int main()
{
    string lol, lol_reversed, lol_reversed2;
    cin >> lol;
    lol_reversed = lol;
    reverse(lol_reversed.begin(), lol_reversed.end());
    int countZeros = 0;
    for (size_t i = 0; i < int(lol.size()); i++)
    {
        if (lol_reversed[i] != '0')
        {
            break;
        }
        countZeros++;
    }
    while (countZeros--)
    {
        lol.pop_back();
    }
    lol_reversed2 = lol;
    reverse(lol_reversed2.begin(), lol_reversed2.end());
    if (lol == lol_reversed2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}