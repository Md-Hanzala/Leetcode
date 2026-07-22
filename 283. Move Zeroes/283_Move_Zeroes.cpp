class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n, 0);
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                a[j] = nums[i];
                j++;
            }
        }
        nums = a;
    }
};