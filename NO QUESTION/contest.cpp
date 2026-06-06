#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 37;
    int binary =0;
    int rem = 0;
    int rem1=0;
    int count1=0;
    int count2=0;
    while(n!=0){
        rem = n%2;
        rem1 = (n/2)%2;
        if(rem==1 && rem1==1){
            count1++;
        }
        if(rem==0 && rem1==0){
            count2++;
        }
        n /= 2;
        
    }
    if(count1==1 || count2==1){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}