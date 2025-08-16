#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstHealth, firstStrength, secondHealth, secondStrength;
    cin >> firstHealth >> firstStrength >> secondHealth >> secondStrength;
    bool firstTurn = 1;
    while (firstHealth > 0 && secondHealth > 0)
    {
        if (firstTurn)
        {
            secondHealth -= firstStrength;
            firstTurn = !firstTurn;
        }
        else
        {
            firstHealth -= secondStrength;
            firstTurn = !firstTurn;
        }
        
    }
    (firstHealth > 0) ? cout << "Yes" : cout << "No";
}