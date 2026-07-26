class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size(),load=0;
    unordered_map<int,int>f;
    for(int i=0;i<n;i++){
        f[nums[i]]++;
    } 
    for (auto& pair : f) {
        if (pair.second > n / 2) {
            return pair.first;
            }
        }
        return -1;   
    }
};