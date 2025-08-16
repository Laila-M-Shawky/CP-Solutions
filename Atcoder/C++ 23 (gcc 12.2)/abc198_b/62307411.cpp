// #include <bits/stdc++.h>
// using namespace std;
// #define Statixia ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define ll long long

// ll testcases = 1;

// bool isPalindrome(string lol)
// {
//     for (size_t i = 0; i < lol.size() / 2; i++)
//     {
//         if (lol[i] != lol[lol.size() - 1 - i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// string solve()
// {
//     string lolity;
//     cin >> lolity;
//     string zeroedLolity = lolity;
//     for (char i : lolity)
//     {
//         if (i == '0')
//         {
//             zeroedLolity = '0' + zeroedLolity;
//         }
//     }
//     return (isPalindrome(zeroedLolity)) ? "Yes" : "No";
// }

// int main()
// {
//     Statixia
     //cin >> testcases;
//     while (testcases--)
//     {
//         cout << solve() << '\n';
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define Statixia ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll testcases = 1;

bool isPalindrome(string lol)
{
    string lolOrigin = lol; 
    reverse(lol.begin(), lol.end());
    return (lol == lolOrigin) ? 1 : 0;
}

string solve()
{
    string lola;
    cin >> lola;
    int size = lola.size();
    for (int i = size - 1; i > 0; i--)
    {
        if (lola[i] == '0')
        {
            lola.pop_back();
        }
        else
        {
            break;
        }
    }
    return (isPalindrome(lola)) ? "Yes" : "No";
}

int main()
{
    Statixia
    //cin >> testcases;
    while (testcases--)
    {
        cout << solve() << '\n';
    }
    return 0;
}
