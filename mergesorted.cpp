//Using extra array

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n,vector <int> nums3){
        int i=0,j=0,k=0;
        int x = n+m;
        while(i<m && j<n && k<x){
            if(nums1[i]<=nums2[j]){
                nums3[k] = nums1[i];
                i++;
                k++;
            }
            else{
                nums3[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i<m && k<n+m){
            nums3[k++] = nums1[i++];
        }
        while(j<n && k<n+m){
            nums3[k++] = nums2[j++];
        }
        
        for(i=0;i<n+m;i++){
            cout << nums3[i] << " ";
        }
    }    
};

int main(){
    vector <int> nums1 = {1,2,3,0,0,0};
    vector <int> nums2 = {2,5,6,7,8,9};
    vector <int> nums3(nums1.size()+nums2.size());
    int n = 6;
    int m = 3;
    Solution s1;
    s1.merge(nums1, m,nums2,n,nums3);
    return 0;
}

// int main(){
//     int i,j,k=0;
//     int arr1[6] = {1,2,3,0,0,0};
//     int arr2[3] = {2,5,6};
//     int arr3[9];
//     while(k<9){
//         while(i<j){
//             if(arr1[i]<arr1[j]){
//                 arr3[k] = arr1[i];
//                 i++;
//             }
//             else{
//                 arr3[k] = arr2[j];
//                 j++;
//             }
//             k++;
//         }
//     }    

// for(int i=0;i<9;i++){
//     cout << arr3[i] << " ";
// }
// return 0;
// }