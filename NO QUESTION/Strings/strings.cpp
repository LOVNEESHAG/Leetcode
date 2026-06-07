#include<bits/stdc++.h>
using namespace std;


//Character Arrays
// int main(){
//     char str1[] = {'a','b','c'}; //Invalid string
//     char str[] = {'a','b','c','\0'}; //Valid string with null pointer stating that string is ending here
//     cout << str << endl;
//     cout << strlen(str1) << endl;  //Iski length 4 aayi kyunki isme null pointer nhi tha
//     cout << strlen(str) << endl;   //Iski length 3 aayi kyuki null pointer se pata chl gya
//     cout << str[2] << endl;    
//     cout << str[3] << endl;
//     return 0;
// }


//Strings

int main(){
    char str[]= "hello";
    cout << str << endl;               //Print full string 
    cout  << strlen(str) << endl;      //Print 5 for hello
    cout << str[2] << endl;            //Print 2nd index element ; l
    cout << str[5] << endl;            //Print empty space as null pointer
    cout << str[6] << endl;            //Print empty space as null pointer
    return 0;
}