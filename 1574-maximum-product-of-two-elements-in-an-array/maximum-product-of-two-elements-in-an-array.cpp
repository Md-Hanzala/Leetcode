class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if (pq.size() > 2) {
                pq.pop();
            }
        }
        vector<int> res;
        int ans = 1;
        while (!pq.empty()) {
            res.push_back(pq.top() - 1);
            pq.pop();
        }
        for (int i = 0; i < res.size(); i++) {
            ans *= res[i];
        }
        return ans;
    }
};