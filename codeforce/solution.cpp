#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char max = 'a';
    for (char c : s) {
        if (c > max) {
            max= c;
        }
    }
    int count = 0;
    for (char c : s) {
        if (c == max) {
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        cout << max;
    }

    return 0;
}