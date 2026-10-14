class Solution {
public:
    struct cmp{
        bool operator()(pair<int,char>& a, pair<int,char>& b){
            if(a.first != b.first)
            return a.first < b.first;  //Max Heap

            return a.second < b.second; //Max Heap
        }
    };
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char,int>freq;
        for(auto x : s){
            freq[x]++;
        }
        string res = "";
        int seat = 0;
        priority_queue<pair<int,char>,vector<pair<int,char>>,cmp>pq;
        for(auto x : freq){
            int element = x.first;
            int freq = x.second;
            pair<int,char>curr = {freq,(char)element};
            pq.push(curr);
        }
        while(!pq.empty()){
            pair<int,char>p = pq.top();
            pq.pop();
            if(res.size()==0 || res[seat-1] != p.second){
                res.push_back(p.second);
                p.first--;
                seat++;
                if(p.first>0)
                pq.push(p);
            }

            else{
                if(pq.empty())
                return "";

                pair<int,char>p2 = pq.top();
                pq.pop();
                res.push_back(p2.second);
                p2.first--;
                seat++;
                if(p2.first>0)
                pq.push(p2);

                pq.push(p);
            }
        }
        return res;
    }
};