#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector <int> arr = {1,0,1,0,1,0};
//     int n = arr.size();
//     int count1 = 0;
//     int count0 = 0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else{
//             count1++;
//         }
//     }
//     for(int i=0;i<count0;i++){
//         arr[i] = 0;
//     }
//     for(int i=count0;i<n;i++){
//         arr[i] = 1;
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

int main(){
    vector <int> arr = {1,0,1,0,1,0};
    int n = arr.size();
    int st = 0;
    int end = n-1;
    while(st<=end){
        if(arr[st]==1 && arr[end]==0){
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
        else if(arr[st]==0){
            st++;
        }
        else{
            end--;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}