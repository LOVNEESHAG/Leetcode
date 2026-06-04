#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
//         int a = 0; int b = n-1;

//         while(a<=b){
//             int c = numbers[a]  + numbers[b];
//             if(c==target){
//                 return {a+1,b+1};
//             }
//             else if(c>target){
//                 b--;
//             }
//             else{
//                 a++;
//             }
//         }
//     return {};
//     }
// };

// int main(){
//     vector <int> nums = {1,2,3,4};
//     int target = 5; 
//     Solution s1;
//     s1.twoSum(nums, target);
//     return 0;
// }

//Bruteforce 
// int main(){
//     vector <int> v = {2,7,11,15};
//     int n = v.size();
//     int target  = 9;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(target==v[i]+v[j]){
//                 cout << i+1 << " " << j+1 << endl;
//             }
//         }
//     }
// return 0;
// }

//Optimized
int main(){
    vector <int> v = {2,7,11,15};
    int n = v.size();
    int target  = 13;
    int i =0;
    int j = n-1;
    while(i<j){
        int ans = v[i]+v[j];
        if(target==ans){
            cout << (i+1) << " " << (j+1) << endl;
            break;
        }
        else if(target>ans){
            i++;
        }
        else{
            j--;
        }
    }
return 0;
}