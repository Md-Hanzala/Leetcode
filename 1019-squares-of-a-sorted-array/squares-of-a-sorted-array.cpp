class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr(n);
    for(int i = 0 ; i<n ;i++){
        int m= nums[i]*nums[i];
        arr[i]=m;
    }
    sort(arr.begin(),arr.end());
    return arr;     
    }
};