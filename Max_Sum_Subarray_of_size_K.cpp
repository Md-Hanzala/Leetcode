class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = k - 1;
        int sum = 0, res = 0;
 
        for (int i = low; i < high; i++) {
            sum += arr[i];
        }
 
        while (high < n) {
            sum += arr[high];
            res = max(res, sum);
            sum -= arr[low];
            low++;
            high++;
        }
 
        return res;
    }
};