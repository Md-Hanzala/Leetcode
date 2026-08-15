class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> f;
        f['I'] = 1;
        f['V'] = 5;
        f['X'] = 10;
        f['L'] = 50;
        f['C'] = 100;
        f['D'] = 500;
        f['M'] = 1000;

        int n = s.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && f[s[i]] < f[s[i + 1]]) {
                result -= f[s[i]];
            } else {
                result += f[s[i]];
            }
        }
        return result;
    }
};