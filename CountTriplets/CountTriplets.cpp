    class Solution {
      public:
        int countTriplets(int sum, vector<int>& arr) {
        int n=arr.size();
        int no=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && arr[i]==arr[i-1])
            continue;
            int j=i+1,k=n-1;
            while(j<k){
            int target=arr[i]+arr[j]+arr[k];
            if(target<sum){
                no=no+(k-j);
                j++;
            }else{
            k--;
            }
            }
        }
        return no;
        }
    };