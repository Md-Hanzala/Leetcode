class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        int best=arr[0],ans=arr[0],n=arr.size();
        for(int i=1;i<n;i++){
            int v1= best+arr[i];
            int v2= arr[i];
            best=min(v1,v2);
            ans=min(ans,best);
        }
        return ans;
    }
};
