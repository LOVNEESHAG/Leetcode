class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m-1;
        int row = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[mid][0]<=target){
                row = mid;
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        int low1 = 0;
        int high1 = n-1;
        while(low1<=high1){
            int mid1 = (low1+high1)/2;
            if(matrix[row][mid1]==target){
                return true;
            }
            else if(matrix[row][mid1]<target){
                low1 = mid1+1;
            }
            else{
                high1 = mid1-1;
            }
        }
        return false;
    }
};