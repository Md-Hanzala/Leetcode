class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1,b=1,k=1,n=nums.size();
        while(b<n){
            if (nums[b]==nums[b-1]){
                b++;
            }
            else {
                nums[a]=nums[b];
                a++;
                k++;
                b++;
            }
        }
        return k;   
    }
};