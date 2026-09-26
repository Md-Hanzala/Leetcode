class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> arr;
        if (n < 3)
            return arr;
        sort(nums.begin(), nums.end());
        for (int low = 0; low < n - 2; low++) {
            if (low > 0 && nums[low] == nums[low - 1])
                continue;
            int mid = low + 1;
            int high = n - 1;
            while (mid < high) {
                int sum = nums[low] + nums[mid] + nums[high];
                if (sum == 0) {
                    arr.push_back({nums[low],nums[mid],nums[high]});
                    while (mid < high && nums[mid] == nums[mid + 1])
                        mid++;
                    while (mid < high && nums[high] == nums[high - 1])
                        high--;
                    mid++;
                    high--;
                }else if (sum < 0) {
                    mid++;
                }else {
                    high--;
                }
            }
        }
        return arr;
    }
};