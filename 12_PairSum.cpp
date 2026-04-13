#include<iostream>
#include<vector>
using namespace std;


//Bruteforce Approach
// int main(){
//     vector <int> nums = {1,2,3,4,5};
//     vector <int> ans;
//     int size =  5;
//     int target  = 4;
//     for(int i=0;i<size;i++){     
//         for(int j=i+1;j<size;j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     cout << ans[0] << " " << ans[1] << endl;
//     return 0;
// }

//Two Pointer approach   -> Sorted Array, Pair return, 
vector <int> pairSum(vector <int>& nums,int n, int target){
    vector <int> ans;
    int i=0,j=n-1;
    while(i<j){
        if(nums[i] + nums[j]==target){
            ans.push_back(i+1);
            ans.push_back(j+1);
            return ans;
        }
        else if(nums[i] + nums[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
return ans;
}

int main(){
    vector <int> nums = {1,2,3,4,5};
    int target = 7;
    int n =5;
    vector<int> ans = pairSum(nums,n,target);
    cout<< ans[0]<< " "<<ans[1]<<endl;
    return 0;
}