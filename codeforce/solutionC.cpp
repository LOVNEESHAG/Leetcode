#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;

long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return res; 
}

long long toBinaryDecimal(long long x) {
    long long res = 0;
    long long place = 1;

    while (x > 0) {
        if (x % 2 == 1) {
            res += place;
        }
        place *= 10;
        x /= 2;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long S = 0;

        for (int i = 0; i < n; i++) {
            long long L, R;
            cin >> L >> R;

            for (long long x = L; x <= R; x++) {
                long long val = toBinaryDecimal(x);

                int len = 0;
                long long temp = x;
                while (temp > 0) {
                    len++;
                    temp /= 2;
                }

                S = (S * power(10, len) % MOD + val) % MOD;
                if (x - L > 100000) break; 
            }
        }

        long long ans = (S * S) % MOD;
        cout << ans << "\n";
    }

    return 0;
}