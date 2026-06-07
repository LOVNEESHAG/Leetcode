#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string str;
//     getline(cin, str);
//     string rev = str;
//     reverse(str.begin(),str.end());
//     if(str==rev){
//         cout << "Palindrome" << endl;
//     }
//     else{
//         cout << "Not Palindrome" << endl;
//     }
//     return 0;
// }


bool isPalindromeForAll(string s){
    string rev = s;
    reverse(s.begin(),s.end());
    if(rev==s){
        return true;
    }
    else{
        return false;
    }
}

bool isAlphaNumeric(char ch){
    if((ch >= '0' && ch<= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    else{
        return false;
    }
}

bool isPalindromeAlphaNumeric(string str){
    int st=0;int end= str.length()-1;
    while(st<end){
        if(!isAlphaNumeric(str[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st])!=tolower(str[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}


int main(){
    string s;
    getline(cin,s);
    // cout << isPalindromeForAll(s) <<endl;
    cout << isPalindromeAlphaNumeric(s) <<endl;
    return 0;
}