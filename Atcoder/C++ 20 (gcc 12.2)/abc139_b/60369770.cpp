#include <bits/stdc++.h>
using namespace std;

int main()
{
    int capacity_of_sockets, no_of_sockets;
    cin >> capacity_of_sockets >> no_of_sockets;
    cout << ((no_of_sockets - 1) + (capacity_of_sockets - 1) - 1) / (capacity_of_sockets - 1);
}