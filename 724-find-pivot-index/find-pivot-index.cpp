class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n=nums.size(),sum=0,rsum,lsum=0;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    for(int j=0;j<n;j++){
        rsum = sum-lsum-nums[j];
        if(lsum==rsum){
            return j;
        }
        lsum += nums[j];
    }
    return -1;
    }
};