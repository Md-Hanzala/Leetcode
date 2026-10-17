class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        int prevsum=0;
        for(int i = 0 ; i < n ; i++){
            res[i]=nums[i]+prevsum;
            prevsum=res[i];
        }
        nums=res;
        return nums;
    }
};