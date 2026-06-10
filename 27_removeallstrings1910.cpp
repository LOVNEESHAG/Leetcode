#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
    return s;
    }
};

int main(){
    string s = "axxxxyyyyb";
    string s1 = "daabcbaabcbc";
    string part =  "xy";
    string part1 =  "abc";
    Solution sol1;
    cout << sol1.removeOccurrences(s,part) << endl;
}