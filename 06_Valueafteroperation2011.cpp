#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int n = operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                x -= 1;
            }
            else{
                x += 1;
            }
        }
    return x;
    }
};

int main(){
    vector <string> operations = {"X++","X--","++X","--X"};
    
    Solution s1;
    s1.finalValueAfterOperations(operations);
    return 0;
}