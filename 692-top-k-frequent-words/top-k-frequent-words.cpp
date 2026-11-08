class Solution {
    struct cmp {
        bool operator()(const pair<string,int>& a,
                        const pair<string,int>& b) const {
            if (a.second != b.second) {
                return a.second > b.second;
            }
            return a.first < b.first;
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> f;
        for (int i = 0; i < words.size(); i++) {
            f[words[i]]++;
        }
        priority_queue<pair<string,int>,vector<pair<string,int>>, cmp> pq;
        for (auto entry : f) {
            string word = entry.first;
            int freq = entry.second;
            pair<string,int> curr = {word, freq};
            if (pq.size() < k) {
                pq.push(curr);
                continue;
            }
            if (curr.second > pq.top().second || (curr.second == pq.top().second && curr.first < pq.top().first)) {
                pq.pop();
                pq.push(curr);
            }
        }
        vector<string> res;

        while (!pq.empty()) {
            res.push_back(pq.top().first);
            pq.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};