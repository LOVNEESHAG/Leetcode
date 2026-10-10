class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            if(a.second != b.second)
            return a.first > b.first;   //MIN HEAP FOR FREQUENCY

            return a.second > b.second;  //MIN HEAP FOR ELEMENTS
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;    //CALCULATE FREQUENCY OF EVERY ELEMENT IN HASH TABLE
        for(auto x : nums){
            freq[x]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;  //HEAP IN PAIR

        for(auto i : freq){                         
            int element = i.first;                      
            int freq = i.second;
            pair<int,int> curr = {freq,element};    //PHELE FREQ THEN ELEMENT FIRST P FREQ H 
            
            if(pq.size()<k)                         //PUSHING 1ST K ELEMENTS IN HEAP 
            {
                pq.push(curr);
                continue;
            }
            //COMPARE IF CURR FREQ IS LESS THAN MIN FREQ IN HEAP CONTINUE ELSE POP MIN FREQ AND PUSH CURR
            if(curr.first<pq.top().first){   
                continue;
            } 
            pq.pop();
            pq.push(curr);
        }
        //STORE REMAINING ELEMENTS IN HEAP WHICH WILL BE EQUAL TO K ELEMENTS IN A VECTOR
        vector <int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};