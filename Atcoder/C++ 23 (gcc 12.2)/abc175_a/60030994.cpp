#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string laila; 
    cin >> laila;

    int count_rain = 0; // Current streak of 'R's
    int maxi = 0;       // Maximum streak of 'R's found

    for (char c : laila)
    {
        if (c == 'R') {
            count_rain++;          // Increase the streak if 'R' is found
            maxi = max(maxi, count_rain); // Update the maximum streak
        } else {
            count_rain = 0;        // Reset the streak if not 'R'
        }
    }

    cout << maxi; // Output the maximum streak of consecutive 'R's
    return 0;
}
