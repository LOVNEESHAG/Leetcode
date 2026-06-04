#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size()-1;
        vector <int> ans;
        int product = 1;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                product *= nums[j];
                ans[i] = product;
            }
        }
       } 
    return ans;
    }
};


int main(){
    vector <int> nums = {1,2,3,4};
    Solution s1;
    int ans;
    s1.productExceptSelf(nums);
    return 0;
}