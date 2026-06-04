#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {0,3,8,9,5,2};
    int target = 5;
    int n= arr.size();
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout << mid << endl;
            break;
        }
        else if(arr[mid]<arr[mid-1]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
return 0;
}