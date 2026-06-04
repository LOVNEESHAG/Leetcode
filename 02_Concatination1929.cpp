#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        for(int j=0;j<2*n;j++){
            cout<<ans[j];
        }
    }
};

int main(){
    int n = 6;
    vector <int> nums = {1,2,1};
    
    Solution s1;
    s1.getConcatenation(nums);
    return 0;
}