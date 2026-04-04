#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int m = *max_element(candies.begin(), candies.end());
        vector <bool> result;
        for(int i=0;i<n;i++){
            if(m<=candies[i] + extraCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
    return result;
    }
};


int main(){
    vector <int> candies = {2,3,5,1,3};
    
    Solution s1;
    s1.kidsWithCandies(candies, 3);
    return 0;
}