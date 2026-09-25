class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr(n);
    int low=0,high=n-1,s=n-1;
    while(low<=high){
        if(abs(nums[high])>abs(nums[low])){
            arr[s]=nums[high]*nums[high];
            s--;
            high--;
        }else if(abs(nums[high])<abs(nums[low])){
            arr[s]=nums[low]*nums[low];
            s--;
            low++;
        }else{
            arr[s]=nums[high]*nums[high];
            s--;
            high--;
        }
    }
    return arr;
    }
};