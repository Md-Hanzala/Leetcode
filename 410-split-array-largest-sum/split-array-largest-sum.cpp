class Solution {
public:
    bool fun(vector<int>& nums, int n, int guess, int b) {
        int k = 1;
        long long page = 0;
        for (int i = 0; i < n; i++) {
            if (page + nums[i] <= guess) {
                page += nums[i];
            }else {
                k++;
                page = nums[i];
                if (k > b) {
                    return false;
                }
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        long long high = 0;
        for (int i = 0; i < n; i++) {
            high += nums[i];
        }
        long long res = -1;
        while (low <= high) {
            int guess = low + (high - low) / 2;
            if (fun(nums, n, guess, k)) {
                res = guess;
                high = guess - 1;
            }else {
                low = guess + 1;
            }
        }
        return res;
    }
};