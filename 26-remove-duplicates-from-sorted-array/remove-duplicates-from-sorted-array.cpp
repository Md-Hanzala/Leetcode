class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int n = nums.size();
        if(n==0){
            return 0;
        }
        vector<int>res(n);
        int k=1;
        res[0]=nums[0];
        for(int i = 1; i<n ; i++){
            if(nums[i]==nums[i-1]){
                continue;
            }else{
                res[k]=nums[i];
                k++;
            }
        }
        nums=res;
        nums.resize(k);
        return k;
    }
};