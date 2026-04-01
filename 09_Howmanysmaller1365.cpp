#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector <int> small;
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i && nums[j]<nums[i]){
                    c++;
                }
            }
            small.push_back(c);
            c = 0;
        }
        return small;
    }
};

int main(){
    vector <int> nums = {1,2,3,4};
    Solution s1;
    s1.smallerNumbersThanCurrent(nums);
    return 0;
}