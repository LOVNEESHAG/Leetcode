#include<bits/stdc++.h>
using namespace std;

void sortColors(vector <int>& arr){
    int n = arr.size();
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<zero){
            arr[i] = 0;
        }
        if(i+zero<one+zero){
            arr[i+zero] = 1;
        }
        if(i+zero+one<two+zero+one){
            arr[i+zero+one] = 2;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}



int main(){
    vector <int> arr = {2,0,2,1,1,0};
    sortColors(arr);
    return 0;
}