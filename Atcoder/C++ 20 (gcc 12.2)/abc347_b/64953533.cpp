#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Statixia ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    Statixia
    ll n, k;
    cin >> n >> k;

    unordered_set<ll> unique_in_range;
    for (ll i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        if (a >= 1 && a <= k) {
            unique_in_range.insert(a);
        }
    }

    ll total_sum = k * (k + 1) / 2;
    ll sum_present = 0;
    for (ll x : unique_in_range) {
        sum_present += x;
    }

    cout << total_sum - sum_present << '\n';
}
