#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int p =0;
        while(x!=0){
            int x = x/10;
            int rem = x%10;
            p = p*10 + rem;
        }
        if(p==x){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    int x  =121;
    Solution s1;
    cout << s1.isPalindrome(x);
    return 0;
}