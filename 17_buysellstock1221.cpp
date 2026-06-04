#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector <int> arr1 = {7,1,5,3,6,4};
//     vector <int> arr2 = {7,6,4,3,1};
//     vector <int> arr = {2,4,1};

//     int n = arr.size();
//     int buy =INT_MAX,sell = 0;
//     int max_sell = 0;
//     for(int i= 0;i<n;i++){
//         if(arr[i]<buy){
//             buy = arr[i];
//         }
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>buy){
//                 sell = arr[j];
//                 max_sell = max(sell,max_sell);
//             }
//         }
//     }
//     int profit = max_sell - buy;
//     if(profit<0){
//         profit = 0;
//     }
//     cout << "profit:"<<profit <<endl << "Sell: " <<max_sell << endl <<"Buy:" << buy << endl;
//     return 0;
// }

int main(){
    vector <int> arr2 = {7,6,4,3};
    vector <int> arr1= {7,1,5,3,6,4};
    vector <int> arr= {2,3,1};
    int n = arr.size();
    int max_profit = 0;
    int bestbuy = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>bestbuy){
            max_profit = max(max_profit, arr[i] - bestbuy);
        }
        bestbuy = min(bestbuy,arr[i]);
    }

    if(max_profit>0){
        cout << max_profit << endl;
    }
    else{
        cout << "0" << endl;
    }
return 0;
}