class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for (int low = 0; low < n - 2; low++) {
            int mid = low + 1;
            int high = n - 1;
            while (mid < high) {
                int sum = nums[low] + nums[mid] + nums[high];
                if (abs(sum - target) < abs(res - target)) {
                    res = sum;
                }
                if (sum < target) {
                    mid++;
                }
                else if (sum > target) {
                    high--;
                }else {
                    return sum;
                }
            }
        }
        return res;
    }
};