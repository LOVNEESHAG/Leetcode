class Solution {
public:
    int fun(vector<vector<int>>& matrix, int n, int m, int guess){
        int count = 0;
        int row = m-1;
        int col = 0;
        while(row>=0 && col<n){
            if(matrix[row][col]<=guess){
                count += row + 1;
                col++;
            }
            else{
                row--;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        int res = -1;
        int low = matrix[0][0];
        int high = matrix[m-1][n-1];
        while(low<=high){
            int mid = (low+high)/2;
            int ans = fun(matrix, n, m, mid);
            if(ans<k){
                low = mid +1;
        }
            else{
                res = mid;
                high = mid-1;
            }
        }
        return res;
    }
};