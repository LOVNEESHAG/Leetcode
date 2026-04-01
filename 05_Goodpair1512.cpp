#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j] && i<j){
                    count++;
                }
            }
        }
        return count;
    }
};

int main(){
    vector <int> nums = {1,2,3,4};
    
    Solution s1;
    s1.numIdenticalPairs(nums);
    return 0;
}