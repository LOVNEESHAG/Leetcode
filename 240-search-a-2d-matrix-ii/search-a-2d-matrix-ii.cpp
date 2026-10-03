class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m-1;

        while(low<=n-1 && high>=0){
            if(matrix[high][low]==target){
                return true;
            }
            else if(matrix[high][low]<target){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};