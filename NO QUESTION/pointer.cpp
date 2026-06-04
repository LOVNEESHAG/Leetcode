#include<iostream>
using namespace std;

// //Pass by Value
// void changeA(int a){
//     a = 20;
// }

// //Pass by reference
// void changeA(int* ptr){
//     *ptr = 20;
// }

//Pass by reference alias
void changeA(int &b){
    b = 20;
}

int main(){
    int a = 10;
    changeA(a);
    cout << a << endl;
    return 0;   
}