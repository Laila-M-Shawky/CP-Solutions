#include<bits/stdc++.h>
using namespace std;

int calculate_cost(vector<int>& X, int point) {
    int cost = 0;
    for (int x : X) {
        cost += (x - point) * (x - point);
    }
    return cost;
}

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; i++) cin >> X[i];

    int L = *min_element(X.begin(), X.end());
    int R = *max_element(X.begin(), X.end());

    while (R - L > 3) { // نستمر حتى يصبح النطاق صغيرًا جدًا
        int M1 = L + (R - L) / 3;
        int M2 = R - (R - L) / 3;

        int cost1 = calculate_cost(X, M1);
        int cost2 = calculate_cost(X, M2);

        if (cost1 < cost2) {
            R = M2; // نبحث في النطاق الأيسر
        } else {
            L = M1; // نبحث في النطاق الأيمن
        }
    }

    // تجربة جميع النقاط المتبقية بين L و R
    int ans = INT_MAX;
    for (int i = L; i <= R; i++) {
        ans = min(ans, calculate_cost(X, i));
    }

    cout << ans << endl;
    return 0;
}
