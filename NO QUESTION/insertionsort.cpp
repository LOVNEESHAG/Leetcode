#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector <int>& arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector <int> arr = {7,4,3,2,5};
    insertionSort(arr);
    return 0;
}