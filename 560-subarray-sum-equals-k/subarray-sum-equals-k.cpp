class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int sum=0,q,freq=0,n=nums.size();
    unordered_map<int,int>f;
    f[0]=1;
    for(int i=0;i<n;i++){
        sum += nums[i];
        q=sum-k;
        if(f.find(q) != f.end()){
            freq += f[q];
        }
        f[sum]++;
    }
    return freq;    
    }
};