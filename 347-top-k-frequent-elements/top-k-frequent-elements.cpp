 class Solution {
    struct cmp {
        bool operator()(const pair<int,int>& a, const pair<int,int>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }else{
                return a.second > b.second;
            }
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> f;
        vector<int> res;
        for(int i = 0; i < n; i++) {
            f[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        for(auto entry : f) {
            int element = entry.first;
            int freq = entry.second;
            pair<int,int> curr = {freq, element};
            if(pq.size() < k) {
                pq.push(curr);
                continue;
            }
            if(curr.first < pq.top().first) {
                continue;
            } else {
                pq.pop();
                pq.push(curr);
            }
        }
        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
