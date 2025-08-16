#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define Statixia ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

void solve()
{

}

int main()
{
    string lol;
    cin >> lol;
    set<string> mazen;
    string hemat;
    for (size_t i = 0; i < lol.size(); i++)
    {
        for (size_t j = i; j < lol.size(); j++)
        {
            hemat = lol.substr(i, j - i + 1);
            mazen.insert(hemat);
        }
    }
    cout << mazen.size() << '\n';
    return 0;
}