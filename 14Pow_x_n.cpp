#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int x = 3;
    int BF = n;
    int ans  =1;
    if(BF<0){                        //If power is negative eg. Pow(3,-7); 3 => 1/3 and -5 => 5;
        x = 1/x;
        BF = -BF;
    }
    while(BF>0){
        if(BF%2==1){                 //If binary number bit == 1; Multiply by x^2n
            ans *= x;
        }
        x *= x;                     //It will decrease the iteration to O(logn) from O(n)
        BF /= 2;
    }
    cout << ans;
    return 0;
}