#include <bits/stdc++.h>
using namespace std;

int main()
{
    double velocity, startSec, endSec, distance;
    cin >> velocity >> startSec >> endSec >> distance;
    const double hitSec = distance / velocity;
    if (hitSec >= startSec && hitSec <= endSec) {cout << "No"; }
    else {cout << "Yes" ;}
    
}