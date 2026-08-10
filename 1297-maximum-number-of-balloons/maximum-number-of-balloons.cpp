class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> f;
        for (char c : text) {
            f[c]++;
        }
        int result = f['b'];
        result = min(result, f['a']);
        result = min(result, f['l'] / 2);
        result = min(result, f['o'] / 2);
        result = min(result, f['n']);
        return result;
    }
};