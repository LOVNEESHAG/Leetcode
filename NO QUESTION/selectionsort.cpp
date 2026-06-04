#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector <int>& arr){
    int n = arr.size();
    int small = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        swap(arr[small],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }   
}

void selectionDesc(vector <int>& arr){
    int n = arr.size();
    for(int i=n-1;i>0;i--){
        int id=i;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[id]){
                id = j;
            }
        }
    swap(arr[i],arr[id]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
void selectionDescchar(vector <char>& arr){
    int n = arr.size();
    for(int i=n-1;i>0;i--){
        int id=i;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[id]){
                id = j;
            }
        }
    swap(arr[i],arr[id]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}



int main(){
    vector <int> arr = {9,7,3,1,6};
    vector <char> arr1 = {'a','e','c','b'};
    selectionSort(arr);
    cout << endl;
    selectionDesc(arr);
    cout << endl;
    selectionDescchar(arr1);
}