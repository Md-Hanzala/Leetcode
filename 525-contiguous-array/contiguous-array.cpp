class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int n=nums.size(),zero=0,one=0,res=0,diff;
    unordered_map<int,int>f;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            zero++;
        }else{
            one++;
        }
        diff=zero-one;
        if(diff==0){
            res=max(res,i+1);
            continue;
        }
        if(f.find(diff)!=f.end()){
            int len = i - f[diff];
            res=max(len,res);
        }else{
            f[diff] = i;
        }
    }
    return res;    
    }
};