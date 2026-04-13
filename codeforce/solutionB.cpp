#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(2 * N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i + N] = A[i];
    }
    vector<long long> P(2 * N + 1, 0);
    for (int i = 0; i < 2 * N; i++) {
        P[i + 1] = P[i] + A[i];
    }

    long long S = P[N]; 

    unordered_map<int, int> freq;

    long long ans = 0;
    int r = 0;

    for (int l = 0; l < N; l++) {
        while (r <= l + N && P[r] - P[l] <= S / 2) {
            int rem = P[r] % M;
            freq[rem]++;
            r++;
        }

        int leftRem = P[l] % M;
        freq[leftRem]--;
        ans += freq[leftRem];

        if (freq[leftRem] == 0) {
            freq.erase(leftRem);
        }
    }

    cout << ans;
}