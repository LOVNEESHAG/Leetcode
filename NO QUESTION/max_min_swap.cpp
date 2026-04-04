#include<iostream>
using namespace std;

void maxSwap(int arr[], int size){
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for(int i=0,j=0;i<size,j<size;i++,j++){
        if(arr[i]<smallest){
            smallest = i;
        }
        if(arr[j]>largest){
            largest = j;
        }
        
    }
    cout<< smallest<<" "<<largest<<endl;
    swap(arr[smallest], arr[largest]);
    cout<< smallest<<" "<<largest<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    maxSwap(arr, size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}