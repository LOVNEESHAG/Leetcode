#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int singleInteger(vector <int>& arr){
        int n= arr.size();
        int st = 0;
        int end = n-1;
//Edge case if arr has 1 element only

        if(n==1){                                   
            return arr[0];
        }
        while(st<=end){
            int mid = st +(end-st)/2;
//If single element is on 0th index (edge)
            if(mid==0 && arr[0]!=arr[1]){           
                return arr[mid];
            }
//If single element is on (n-1) index (edge)
            if(mid==n-1 && arr[n-1]!=arr[n-2]){      
            }
//If single then agla pichla surely different
            if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){  
                return arr[mid];
            }
//To select left and right elements even h ya odd agar mid even to r &l m elements bhi even
            else if(mid%2==0){          
// If both side even compare m-1 with m element if same go to left  
                if(arr[mid-1]==arr[mid]){
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
// If both side odd
            else{
// check m-1 with m if equal go to right
                if(arr[mid-1]==arr[mid]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

int main(){
    vector <int> arr = {5};                         //Edge case if arr has 1 elemnet only
    vector <int> arr4 = {1,1,2,2,3,3,5};            //Edge case mid = n-1
    vector <int> arr3 = {1,2,2,3,3,4,4};            //Edge case mid = 0
    vector <int> arr2 = {3,3,7,7,10,11,11};         //When left and right are odd
    vector <int> arr1 = {1,1,2,3,3,4,4,8,8};        //When left and right are even
    Solution s1;
    cout << s1.singleInteger(arr);
    return 0;
}