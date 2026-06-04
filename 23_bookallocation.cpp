#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//     bool isValid(int mid,int M,vector <int> arr,int n){
//         int pages = 0;
//         int count  = 1;
//         for(int i=0;i<n;i++){
//             pages += arr[i];
//             if(pages>mid){
//                 count++;
//                 pages = arr[i];
//             }
//         }
//         if(count<=M){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int minimumpages(vector <int>& arr,int M){
//         int n = arr.size();
//         int ans = 0;
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             sum += arr[i];
//         }
        
//         int s = *max_element(arr.begin(),arr.end());
//         int e = sum;
//         while(s<=e){
//             int mid = s + (e-s)/2;
//             if(isValid(mid,M,arr,n)==true){
//                 ans = mid;
//                 e = mid -1;
//             }
//             else{
//                 s = mid+1;
//             }
//         }
//     return ans;
//     }

// };

// class Solution {
//   public:
//     int minTime(vector <int>& arr, int k) {
//         // code here
//         int n = arr.size();
//         int ans = 0;
//         int st=0;
//         int end = arr[0];
//         for(int i=0;i<n;i++){
//             st = max(st,arr[i]);
//             end += arr[i];
//         }
//         if(k>n){
//             return -1;
//         }
//         while(st<=end){
//             int mid = st + (end-st)/2;
//             int wall_len=0,count=1;
//             for(int i=0;i<n;i++){
//                 wall_len += arr[i];
//                 if(wall_len>mid){
//                     count++;
//                     wall_len = arr[i];
//                 }
//             }
//             if(count<=k){
//                 ans = mid;
//                 end = mid -1;
//             }
//             else{
//                 st = mid + 1;
//             }
//         }
//     return ans;       
//     }
// };


class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        int st=stalls[0];
        int end = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            st = min(st,stalls[i]);
            end = max(end,stalls[i]);
        }
        int min =st;
        while(st<=end){
            int mid = st + (end-st)/2;
            int pos=0;int count=1;
            for(int i=0;i<n;i++){
                pos += stalls[i];
                if(pos>mid){
                    count++;
                    pos = stalls[i];
                }
                if(count<=k){
                    ans = mid-stalls[min];
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
    return ans;
    }
};
int main(){
    vector <int> arr = {2, 12, 11, 3, 26, 7};
    vector <int> arr4 = {1, 2, 4, 8, 9};
    vector <int> arr3 = {5,10,30,20,15};
    vector <int> arr2 = {1,2,3,4};
    vector <int> arr1 = {12,34,67,90};
    int M = 3;
    Solution s1;
    cout << s1.aggressiveCows(arr,M);
    return 0;
}