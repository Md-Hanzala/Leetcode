class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    int best=nums[0],worst=nums[0],ans=abs(nums[0]),n=nums.size();
    for(int i=1;i<n;i++){
        int v1=nums[i];
        int v2=nums[i]+best;
        int v3=nums[i]+worst;
        best=max(v1,v2);
        worst=min(v1,v3);
        int absbest=abs(best);
        int absworst=abs(worst);
        ans=max(ans,max(absbest,absworst));
    }
    return ans;    
    }
}; 