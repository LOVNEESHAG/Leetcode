#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector <int> arr = {5,0,1,2,3,4};
//     vector <int> arr1 = {0,2,1,5,3,4};
//     int n = arr.size();
//     vector <int> ans(n);
//     for(int i=0;i<n;i++){
//         ans[i] = arr[arr[i]];
//     }
//     for(int i=0;i<n;i++){
//         cout << ans[i] << " ";
//     }
// return 0;
// }
// int main(){
//     vector <int> arr = {5,0,1,2,3,4};
//     vector <int> arr1 = {0,2,1,5,3,4};
//     int n = arr.size();
//     vector <int> ans(2*n);
//     for(int i=0;i<n;i++){
//         ans[i] = arr[i];
//         ans[n+i] = arr[i];
//     }
//     for(int i=0;i<2*n;i++){
//         cout << ans[i] << " ";
//     }
// return 0;
// }
// int main(){
//     vector <int> arr = {1,2,3,4,5};
//     vector <int> arr2 = {5,0,1,2,3,4};
//     vector <int> arr1 = {0,2,1,5,3,4};
//     int n = arr.size();
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         arr[i] = sum + arr[i];
//         sum = arr[i]; 
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// return 0;
// }
// int main(){
//     vector <int> arr = {2,3,5,1,3};
//     vector <int> arr3 = {1,2,3,4,5};
//     vector <int> arr2 = {5,0,1,2,3,4};
//     vector <int> arr1 = {0,2,1,5,3,4};
//     int n = arr.size();
//     vector <bool> result(n);
//     int extra = 3;
//     int m = *max_element(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         int sum = arr[i] + extra;
//         if(sum>m){
//             result[i] = true;
//         } 
//         else{
//             result[i] = false;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout << result[i] << " ";
//     }
// return 0;
// }

// int main(){
//     vector <int> arr = {1,1,1,1};
//     int n = arr.size();
//     int count = 0;
//     for(int j =0;j<n;j++){
//         for(int i=0;i<j;i++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//     }
// cout << count << endl;
// return 0;
// }

// 

// int main(){
//     vector <string> words = {"leet","code"};
//     int n = words.size;
//     vector <int> result;
//     char x;
//     cin >> x;
//     for(int i=0;i<n;i++){
//         int k = words[i].size();
//         for(int j=0;j<k;j++){
//             if(words[i][j]==x){
//                 result.push_back(i);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout << result[i]<<" ";
//     }
// return 0;
// }

// int main(){
//     vector <int> arr = {1,1,2,3};
//     int n = arr.size();
//     vector <int> ans;
//     for(int i=0;i<n;i=i+2){
//         for(int j=0;j<arr[i];j++){
//             ans.push_back(arr[i+1]);
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout << ans[i] << " ";
//     }
// return 0;
// }

// int main(){
//     vector <int> arr = {-1,1,0,-3,3};
//     int n = arr.size();
//     vector <int> ans;
//     int product =1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i != j){
//                 product *= arr[j];
//                 // cout << product <<endl;
//             }
//         }
//         ans.push_back(product);
//         product = 1;
//     }
    
//     for(int i=0;i<n;i++){
//         cout << ans[i] << " ";
//     }
// return 0;
// }

// int main(){
//     vector <int> arr = {1,2,3,4};
//     int n = arr.size();
//     vector <int> prefix(n,1);
//     vector <int> sufix(n,1);
//     vector <int> ans(n,1);
//     //Left
//     for(int i=1;i<n;i++){
//         prefix[i] = prefix[i-1] * arr[i-1];
//     }
//     //Right
//     for(int j=n-2;j>=0;j--){
//         sufix[j] = sufix[j+1] * arr[j+1];
//     }

//     //Loop
//     for(int i=0;i<n;i++){
//         ans[i] = prefix[i] * sufix[i];
//     }

//     for(int i=0;i<n;i++){
//         cout << ans[i] << " ";
//     }
// return 0;
// }

int main(){
    vector <int> arr = {0,0,1,1,1,2,2,3,3,4};
    int n = arr.size();
    int cm = 1;
    int off = 0;
    int count = 1;
    while(cm<n){
        if(arr[cm-1]==arr[cm]){
            cm++;
        }
        else{
            arr[off+1] = arr[cm];
            cm++;
            off++;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << count;
return 0;
}