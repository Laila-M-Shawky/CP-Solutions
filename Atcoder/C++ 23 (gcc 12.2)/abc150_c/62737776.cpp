#include <bits/stdc++.h>
using namespace std;
#define Statixia ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll t = 1;

int solve()
{
    int size;
    cin >> size;
    vector<int> vec1(size), vec2(size);
    for (auto & it : vec1)
    {
        cin >> it;
    }
    for (auto & it : vec2)
    {
        cin >> it;
    }
    vector<int> numbers = vec1;
    sort(numbers.begin(), numbers.end());
    vector<vector<int>> permutations;
    do
    {
        permutations.push_back(numbers);
    } while (next_permutation(numbers.begin(), numbers.end()));
    auto firstIndx = find(permutations.begin(), permutations.end(), vec1);
    auto secondIndx = find(permutations.begin(), permutations.end(), vec2);
    return abs(firstIndx - secondIndx);
}

int main()
{
    Statixia
    while (t--)
    {
        cout << solve() << '\n';
    }
    return 0;
}

