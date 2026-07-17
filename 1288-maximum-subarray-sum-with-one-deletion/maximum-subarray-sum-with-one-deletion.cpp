class Solution {
public:
    int maximumSum(vector<int>& arr) {
    int n=arr.size(),ans=arr[0],nodelete=arr[0],onedelete=arr[0],prevnodelete=INT_MIN;
    for(int i=1;i<n;i++){
        prevnodelete= nodelete;
        nodelete=max(nodelete+arr[i],arr[i]);
        onedelete=max(onedelete+arr[i],prevnodelete);
        ans=max(ans,max(nodelete,onedelete));
    }
    return ans;    
    }
};