class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n=s.size();
    int low=0,res=0,len;
    unordered_map<char,int>f;
    for(int high=0;high<n;high++){
        f[s[high]]++;
        while(f[s[high]] > 1){
            f[s[low]]--;
            low++;
        }
        len=high-low+1;
        res=max(len,res);
    }    
    return res;
    }
};