class Solution {
public:
    int singleNumber(vector<int>& nums) {
    unordered_map<int,int>freq;
    int n = nums.size();
    for(int i = 0 ; i < n ;i++){
        freq[nums[i]]++;
        if(freq[nums[i]]==2){
            freq.erase(nums[i]);
        }
    }   
    return freq.begin()->first; 
    }
};