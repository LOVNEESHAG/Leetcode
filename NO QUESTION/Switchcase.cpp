#include<iostream>
using namespace std;

int main(){
    int x = 1, count = 0;
    switch(x){
        case 1: count++;
        case 2: count++;
        case 3: count++; break;
        case 4: count++;
    }
    cout<<count;
    return 0; 
}

//Output 3 beacuse we use break after each case otherwise it will continue;