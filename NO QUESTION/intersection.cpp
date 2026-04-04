#include<iostream>
using namespace std;

void intersectionArray(int arr1[],int arr2[], int size){
    int i = 0;
    int j = 0;
    while(i<size){
        if(arr1[i]>arr2[i]){
            arr1[i] = arr2[i];
        }
    }   
}

int main(){
    return 0;
}