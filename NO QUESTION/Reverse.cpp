#include<iostream>
#include<algorithm>
using namespace std;

// int swap(int i,int j){
//     int temp;
//     temp = i;
//     i = j;
//     j = temp;
// return 0;
// }

void reverseArr(int array[], int size){
    int i = 0;
    int j = size -1;
    while(i<j){
        swap(array[i],array[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    reverseArr(arr, size);
    for(int i=0;i<size;i++){
        cout<< arr[i]<<endl;
    }
    return 0;
}