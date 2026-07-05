class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int diff;
        int sum1;
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) {
                    sum1 = sum;
                    max_diff = 0;
                    left++;
                    right--;
                } else if (sum < target) {
                    diff = abs(sum - target);
                    if (max_diff > diff) {
                        max_diff = diff;
                        sum1 = sum;
                    }
                    left++;
                } else {
                    diff = abs(sum - target);
                    if (max_diff > diff) {
                        max_diff = diff;
                        sum1 = sum;
                    }
                    right--;
                }
            }
        }
        return sum1;
    }
};