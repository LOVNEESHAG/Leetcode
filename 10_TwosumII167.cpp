#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int a = 0; int b = n-1;

        while(a<=b){
            int c = numbers[a]  + numbers[b];
            if(c==target){
                return {a+1,b+1};
            }
            else if(c>target){
                b--;
            }
            else{
                a++;
            }
        }
    return {};
    }
};

int main(){
    vector <int> nums = {1,2,3,4};
    int target = 5; 
    Solution s1;
    s1.twoSum(nums, target);
    return 0;
}