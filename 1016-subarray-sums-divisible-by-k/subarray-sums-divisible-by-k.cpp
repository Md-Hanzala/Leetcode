class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int sum=0,n=nums.size(),res=0,rem=0;
    unordered_map<int,int>f;
    f[0]=1;
    for(int i=0;i<n;i++){
        sum += nums[i];
        rem=sum%k;
        if(rem<0){
            rem += k;
        }
        if(f.find(rem) != f.end()){
            res += f[rem];
        }
        f[rem]++;
    }
    return res;    
    }
};