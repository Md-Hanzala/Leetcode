class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int bestend=nums[0],worstend=nums[0],ans=nums[0],n=nums.size();
    for(int i=1;i<n;i++){
        int v1= nums[i];
        int v2= nums[i] * bestend;
        int v3= nums[i] * worstend;
        bestend= max(v1,max(v2,v3));
        worstend= min(v1,min(v2,v3));
        ans=max(ans,max(bestend,worstend));
    }
    return ans;    
    }
};