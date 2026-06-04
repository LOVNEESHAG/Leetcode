#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int score(int n) {
        int ans = 0;

        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }

        return ans;
    }
};
// class Solution {
// public:
//     int digitFrequencyScore(int n) {
//        vector <int> fre(10,0);
//        int ans = 0;
//         while(n>0){
//             freq[n%10]++;
//             n/=10;
//             for(int i=0;i<=9;i++){
//                 ans+=i*freq[i]; 
//             }
//         }
//     return ans;
//     }
// };

int main(){
    int n = 101;
    Solution s1;
    cout << s1.score(n);
    return 0;
}