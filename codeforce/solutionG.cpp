#include <bits/stdc++.h>
using namespace std;

long long base36_to_int(const string &s) {
    long long val = 0;
    for (char ch : s) {
        int digit = (ch >= '0' && ch <= '9') ? ch - '0' : ch - 'a' + 10;
        val = val * 36 + digit;
    }
    return val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    unordered_map<string,long long> valid;

    for (int i = 1; i < n; i++) {
        long long val = 0;
        for (int j = i; j < n; j++) {
            char ch = s[j];
            int digit = (ch >= '0' && ch <= '9') ? ch - '0' : ch - 'a' + 10;
            val = val * 36 + digit;
            string sub = s.substr(i, j - i + 1);

            if (sub[0] == '0') {
                valid[sub] = base36_to_int(sub);
            } else if (val >= 36 && val <= 46655) {
                valid[sub] = val;
            }

            if (val > 46655 && sub[0] != '0') break;
        }
    }

    vector<pair<long long,string>> arr;
    arr.reserve(valid.size());
    for (auto &p : valid) arr.push_back({p.second, p.first});

    sort(arr.begin(), arr.end(), [](auto &a, auto &b){
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    });

    cout << arr.size() << "\n";
    for (auto &p : arr) cout << p.second << "\n";
    return 0;
}
