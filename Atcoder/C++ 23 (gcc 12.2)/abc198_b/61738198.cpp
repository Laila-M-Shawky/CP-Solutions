#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

bool isPalindrome(const string& lola)
{
    for (size_t i = 0; i < lola.size() / 2; i++)
    {
        if (lola[i] != lola[lola.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

string solve()
{
    string n;
    cin >> n;
    bool palindrom = isPalindrome(n);
    if (palindrom)
    {
        return "Yes";
    }
    string lolo = n;
    bool palindrom2 = false;
    for (size_t i = 0; (i < n.size() - 1) && !palindrom2; i++)
    {
        lolo = "0" + lolo;
        palindrom2 = isPalindrome(lolo);
    }
    if (palindrom2)
    {
        return "Yes";
    }
    return "No";

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