#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            int k = words[i].size();
            for (int j = 0; j < k; j++) {
                if (words[i][j] == x){
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};

int main(){
    vector <string> words = {"leet","code"};
    char x; cin>>x;
    Solution s1;
    s1.findWordsContaining(words, x);
    return 0;
}