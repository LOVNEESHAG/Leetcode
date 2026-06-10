#include <iostream>
#include <vector>
using namespace std;

// Function declaration
int peakIndexInMountainArray(vector<int>& A);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << peakIndexInMountainArray(arr) << endl;
    return 0;
}

// Function definition (to be filled by the user)
int peakIndexInMountainArray(vector<int>& A) {
    // User logic here
    int n = A.size();
    int st=0; int end= n-1;
    while(st<end){
        int mid = st + (end-st)/2;
        if(A[mid]<A[mid+1]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return st;
}
