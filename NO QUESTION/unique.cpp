#include<iostream>
using namespace std;

// Unique element

void uniqueValue(int arr[], int size){
    int i=0;
    int j = 1;
    while(j<size){
        if(arr[j]==arr[j-1]){
            j++;
        }
        else{
            arr[i+1] = arr[j];
            i++;
            j++;
        }
    }
}

int main(){
    int arr[] = {1,1,2,3,4,4,4,5,5};
    int size = 9;
    uniqueValue(arr, size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}