class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0,high = 0;
        int sum = 0;
        int prevcount = INT_MAX;
        while (high < n) {
            sum += nums[high];
            while (sum >= target) {
                int count = high - low + 1;
                if (count < prevcount) {
                    prevcount = count;
                }
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if (prevcount == INT_MAX)
            return 0;
        return prevcount;
    }
};