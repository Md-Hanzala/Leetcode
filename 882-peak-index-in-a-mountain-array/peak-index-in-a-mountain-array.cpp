class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int n=arr.size();
    int high=n-1,low=0;
    int res=-1;
    while(low<=high){
    int guess=(high+low)/2;
    if(arr[guess]<arr[guess+1]){
        low=guess+1;
    }else{
        res=guess;
        high=guess-1; 
    }
    }
    return res;
    }
};