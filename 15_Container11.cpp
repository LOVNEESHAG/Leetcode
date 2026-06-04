#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int height[9] = {1,8,6,2,5,4,8,3,7};
//     int mstwater = 0;
//     for(int i=0;i<9;i++){
//         for(int j=i+1;j<9;j++){
//             int w = j-i;
//             int ht = min(height[i], height[j]);
//             int area = w*ht;
//             mstwater = max(mstwater, area);
//         }
//     }
//     cout << mstwater;
//     return 0;
// }

// int main(){
//     int height[2] = {1,1};
//     int s = 0, e = 1;
//     int maxarea = 0;
//     while(s<e){
//         int w = e -s ;
//         int ht = min(height[s],height[e]);
//         int area = w * ht;
//         maxarea = max(maxarea, area);
//         if(height[s]<height[e]){
//             s++;
//         }
//         else{
//             e--;
//         }
//     }
//     cout << maxarea;
//     return 0;
// }


int container(vector <int> &height){
    int s = 0, e = height.size() - 1;
    int maxarea = 0;
    while(s<e){
        int area = min(height[s],height[e])*(e-s);
        maxarea = max(maxarea, area);
        if(height[s]<height[e]){
            s++;
        }else{
            e--;
        }
    }
    return maxarea;
}

int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    cout<<container(height);
    return 0;
}