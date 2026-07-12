class Solution {
public:
    int characterReplacement(string s, int k) {
    int len,n=s.size(),low=0,res=0,maxcnt,diff;
    int f[26]={0};
    for(int high=0;high<n;high++){
        f[s[high]-'A']++;
        maxcnt=*max_element(f,f+26);
        len=high-low+1;
        diff=len-maxcnt;
            while(diff>k){
                f[s[low]-'A']--;
                low++;
                maxcnt=*max_element(f,f+26);
                len=high-low+1;
                diff=len-maxcnt;
            }
        len=high-low+1;
        res=max(res,len);
    }    
    return res;
    }
};