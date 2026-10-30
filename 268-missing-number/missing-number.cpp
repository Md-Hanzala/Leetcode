class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;
        for(int i = 0; i < n; i++) {
            pq.push(nums[i]);
        }
        int res = n;
        while(!pq.empty()) {
            if(pq.top() == res) {
                pq.pop();
                res--;
            } else {
                return res;
            }
        }
        return res;
    }
};