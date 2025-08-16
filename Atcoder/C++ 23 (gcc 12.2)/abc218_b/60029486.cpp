#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[26];
    for (size_t j = 0; j < 26; j++)
    {
        cin >> arr[j];
        cout << char(arr[j] + 96);
    }


    return 0;
}
