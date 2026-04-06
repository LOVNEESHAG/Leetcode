#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i : nums){
            ans ^= i;
        }
    return ans;
    }
};

int main(){
    vector <int> nums = {4,1,2,1,2};
    Solution s1;
    s1.singleNumber(nums);
    return 0;
}