class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    int n=fruits.size();
    int low=0,res=0,len,k=2;
    unordered_map<int,int> f;
    for(int high=0;high<n;high++){
        f[fruits[high]]++;
        while(f.size()>k){
            f[fruits[low]]--;
            if(f[fruits[low]]==0){
                f.erase(fruits[low]);
            }
            low++;
        }
        if(f.size()<=k){ 
            len=high-low+1;
            res=max(res,len);
        }
    }
    return res;
    }
};