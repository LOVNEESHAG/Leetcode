#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i] = nums[nums[i]];
        }
        for(int j=0;j<n;j++){
            cout<<ans[j]<<endl;
        }
    }
};

int main(){
    int n = 6;
    vector <int> nums = {0,2,1,5,3,4};
    
    Solution s1;
    s1.buildArray(nums);
    return 0;
}