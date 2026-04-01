#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector <int> arr;
        for(int i=0;i<n;i=i+2){
            for(int j=0;j<nums[i];j++){
                arr.push_back(nums[i+1]);
            }   
        }
        return arr;
    }
};

int main(){
    vector <int> nums = {1,2,3,4};
    Solution s1;
    s1.decompressRLElist(nums);
    return 0;
}