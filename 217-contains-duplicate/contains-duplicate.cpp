class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int>f;    
    for(int i=0;i<n;i++){
        if(f.find(nums[i])==f.end()){
            f[nums[i]]=1;
        }else{
            return true;
        }
    }
    return false;
    }
};