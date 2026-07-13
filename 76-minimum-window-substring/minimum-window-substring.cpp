class Solution {
public:
    string minWindow(string s, string t) {
    unordered_map<char,int> f,g;
    int low=0,n=s.size(),m=t.size();
    int have=0,need=0;
    int resLen=INT_MAX,resLow=0;
    for(int i=0;i<m;i++) g[t[i]]++;
    need=g.size();
    for(int high=0;high<n;high++){
        f[s[high]]++;
        if(g.count(s[high]) && f[s[high]]==g[s[high]]) have++;
        while(have==need){
            if(high-low+1<resLen){
                resLen=high-low+1;
                resLow=low;
            }
            f[s[low]]--;
            if(g.count(s[low]) && f[s[low]]<g[s[low]]) have--;
            low++;
        }
    }
    return resLen==INT_MAX ? "" : s.substr(resLow,resLen);
    }
};