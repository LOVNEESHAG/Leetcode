#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int m = candies[0];
        for(int i=0;i<n;i++){
            if(m<candies[i]){
                m = candies[i];
            }
        }
        for(int i=0;i<n;i++){
            candies[i] += extraCandies; 
            if(candies[i]>=m){
                return true;
            }
            else{
                return false;
            }
        }
    }
};


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i] = nums[i];
            }
            else{
                ans[i] = ans[i-1] + nums[i];
            }
        }
        for(int j=0;j<n;j++){
            cout<< ans[j]<<" ";
        }
    }
};

int main(){
    vector <int> nums = {1,2,3,4};
    
    Solution s1;
    s1.runningSum(nums);
    return 0;
}