#include<iostream>
using namespace std;


//MaxSubaaray = Max Sum of countinoous indices
int main(){
    int n = 5;
    int arr[5] = {-1,2,-3,4,-5};
    int maxsum  = INT8_MIN;
    //Brute Force Approach
    for(int st=0;st<n;st++){
        int sum = 0;
        for(int end=st;end<n;end++){
            sum += arr[end];
            maxsum = max(sum, maxsum);
        }
    }
    cout<<maxsum<<endl; 

    return 0;
}

//Kandane's Algorithm
//According to this if sum < 0 reset it to 0 -> sum = 0 because it will always decrease the sum
int main(){
    int n = 5;
    int arr[5] = {-1,2,3,4,-5};
    int maxsum  = INT8_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxsum = max(maxsum, sum);
        if(sum<0){                          //Use if after max fn for edge case of all -ve array
            sum = 0;
        }
    }
    cout <<"MAXSUM = "  << maxsum << endl;
    return 0;
}