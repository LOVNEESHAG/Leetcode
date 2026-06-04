#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector <int> arr = {5,7,7,8,8,10};
//     int target = 5;
//     int n= arr.size();
//     int st = 0;
//     int end = n-1;
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(arr[mid]==target){
//             cout << mid << endl;
//             break;
//         }
//         else if(arr[mid]>target){
//             end = mid-1;
//         }
//         else{
//             st = mid+1;
//         }
//     }
// return 0;
// }


//Peak
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector <int> arr = {0,3,8,9,5,2};
//     int target = 5;
//     int n= arr.size();
//     int st = 0;
//     int end = n-1;
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//             cout << mid << endl;
//             break;
//         }
//         else if(arr[mid]<arr[mid-1]){
//             end = mid;
//         }
//         else{
//             st = mid;
//         }
//     }
// return 0;
// }
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s =0;int e = n-1;
        int k =0;
        int mid = s + (e-s)/2; 
        while(s<=e){
            if(nums[mid]>nums[mid+1]){
                k = mid;
                break;
            }
            else{
                mid++;
            }
        }
    return nums[k+1];
    }
};
int main(){
    vector <int> arr = {3,4,5,6,7,0,1,2};
    Solution s1;
    cout << s1.findMin(arr);
    return 0;
}