class Solution {
public:
    struct cmp {
        bool operator()(const pair<int, int>& a,const pair<int, int>& b)const{
            if(a.first != b.first) {
                return a.first > b.first;
            }
            return a.second>b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        priority_queue<pair<int, int>,vector<pair<int, int>>,cmp> pq;
        for (auto& entry : freq) {
            int number = entry.first;
            int frequency = entry.second;
            pq.push({frequency, number});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};