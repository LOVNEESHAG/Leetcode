class Solution {
public:
    //It is used to find max element or min element in a heap pair
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
        //Push all elements in a hash map to calc freq
        for(auto x : s){
            freq[x]++;
        }
        //Create a empty string to store result
        string res = "";
        //A seat variable to store no. of elemets stored
        int seat = 0;
        //A heap pair to find max freq element at each position
        priority_queue<pair<int,char>,vector<pair<int,char>>,cmp>pq;
        //Push all elements of hash mmap into heap as a pair
        for(auto x : freq){
            int element = x.first;
            int freq = x.second;
            pair<int,char>curr = {freq,(char)element};
            pq.push(curr);
        }
        //Here the main implementation of greedy starts
        while(!pq.empty()){
            pair<int,char>p = pq.top();
            pq.pop();
            // If res is empty or element of current p is not equal to previous element in res 
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