#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count  = 1;
        int ans = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                count++;
                ans = max(count,ans);
            }
            else{
                count = 1;
            }
        }
    return ans;    
    }
};

int main(){
    vector <int> arr = {1,0,1,1,0,1};
    Solution s1;
    cout << s1.findMaxConsecutiveOnes(arr);
    return 0;
}
