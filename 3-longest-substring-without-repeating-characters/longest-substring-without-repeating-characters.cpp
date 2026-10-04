class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector <int> count(256,0);
        int low = 0;
        int high=0;
        int res =0;
        for(high=0;high<n;high++){
            count[s[high]]++;
            while(count[s[high]]>1){
                count[s[low]]--;
                low++;
            }
            int len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};