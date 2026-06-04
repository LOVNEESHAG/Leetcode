#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> arr){
    int n = arr.size();
    for(int j=n-2 ;j>=0;j--){
        for(int i=0;i<=j;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}


void bubbleSortLast(vector <int> arr){
    int n = arr.size();
    for(int j=0 ;j<=n-2;j++){
        for(int i=j;i>=0;i--){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
void bubbleSortDec(vector <int> arr){
    int n = arr.size();
    for(int j=n-2 ;j>=0;j--){
        for(int i=0;i<=j;i++){
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}


int main(){
    vector <int> arr = {9,7,3,1,6};
    bubbleSort(arr);
    cout << endl;
    bubbleSortDec(arr);
    cout << endl;
    bubbleSortLast(arr);
    return 0;
}