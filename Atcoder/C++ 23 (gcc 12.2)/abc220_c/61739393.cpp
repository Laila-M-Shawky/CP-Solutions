#include <bits/stdc++.h>
using namespace std;
#define Statixia ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll solve()
{
    int size;
    ll limit;
    cin >> size;
    ll * arr = new ll[size];
    ll sumA = 0;
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        sumA += arr[i];
    }
    cin >> limit;
    ll fullCycles = limit / sumA;
    ll sum = fullCycles * sumA;
    ll index = fullCycles * size;
    for (size_t i = 0; i < size; ++i)
    {
        index++;
        sum += arr[i];
        if (sum > limit)
        {
            delete[] arr;
            return index;
        }
    }
}

int main()
{
    Statixia
    int testcases = 1;
    //cin >> testcases;
    while (testcases--)
    {
        cout << solve() << '\n';
    }
    return 0;
}