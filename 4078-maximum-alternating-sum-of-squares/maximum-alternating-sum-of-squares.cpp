class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;
        for (int x : nums) {
            squares.push_back(1LL * x * x);
        }
        sort(squares.begin(), squares.end());
        long long sum = 0;
        int n = squares.size();
        for (int i = 0; i < n; i++) {
            long long square = squares[i];
            if (i<n/2)
            sum -= square;
            else
            sum += square;
        }

        return sum;
    }
};