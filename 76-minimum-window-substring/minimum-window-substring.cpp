class Solution {
public:
    string minWindow(string s, string t) {
    unordered_map <char,int>f;
    unordered_map <char,int>g;
    int low=0,n=s.size(),m=t.size(),len,res=INT_MAX,match=0,v;
    for(int i=0;i<m;i++){
        g[t[i]]++;
    }
    for(int high=0;high<n;high++){
        f[s[high]]++;
        if (g.count(s[high]) && f[s[high]] == g[s[high]]) {
            match++;
            while(match==g.size()){   
            len=high-low+1;
            if(len<res){
                res=len;
                v=low;
            }
            if(g.count(s[low]) && f[s[low]]==g[s[low]]){
                match--;
            }
            f[s[low]]--;
            low++;
            }
        }
    }
    if (res == INT_MAX) return "";
    return s.substr(v, res);    
    }
};
