#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//BruteForce Approach -> Count frequency of each element if >n/2 return that value 
// int majorityElement(vector <int>& nums){
//     int n = nums.size();
//     int count =1;
//     for(int i : nums){
//         for(int j : nums){
//             if(i == j){
//                 count++;
//             }
//         }
//     if(count>n/2){
//         return i;
//     }
//     }
// }

// int main(){
//     vector <int> nums = {2,2,1,1,1,2,2};
//     vector <int> arr = {3,2,3};
//     cout << majorityElement(nums)<<endl;
//     cout << majorityElement(arr)<<endl;
//     return 0;
// }


// 2nd Approach 
// int majorityElement(vector <int>& nums){
//     int n = nums.size();
//     int freq =1;
//     int ans = nums[0];
//     sort(nums.begin(), nums.end());
//     for(int i=1;i<n;i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq>n/2){
//         return ans;
//     }
//     }
// return ans;    
// }

// int main(){
//     vector <int> nums = {2,2,1,1,1,2,2};
//     vector <int> arr = {3,2,3};
//     cout << majorityElement(nums)<<endl;
//     cout << majorityElement(arr)<<endl;
//     return 0;
// }

//Moores Voting Approach (Most Optimal O(n))
int majorityElement(vector <int>& nums){
    int n = nums.size();
    int freq =0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
return ans;         
}

int main(){
    vector <int> nums = {2,2,1,1,1,2,2};
    vector <int> arr = {3,2,3};
    cout << majorityElement(nums)<<endl;
    cout << majorityElement(arr)<<endl;
    return 0;
}

