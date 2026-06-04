#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void shuffle(vector<int>& nums, int n) {
        vector <int> ans(2*n);
        for(int i=0,j=0;j<n;i=i+2,j++){
            ans[i] = nums[j];
            ans[i+1] = nums[j+n];
        }
        for(int i=0;i<2*n;i++){
            cout << ans[i] << " " ;
        }
    }
};

int main(){
    vector <int> arr = {1,2,3,4,4,3,2,1};
    int n = 4;
    Solution s1;
    s1.shuffle(arr,n);
    return 0;
}
