#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector <int>& nums){      //& for pass by reference
    int size = nums.size();
    int i=0,j=size-1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    for(int k=0;k<size;k++){
        cout<<nums[k]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> nums = {1,2,3,4,5};
    reverseVector(nums);
    return 0;
}