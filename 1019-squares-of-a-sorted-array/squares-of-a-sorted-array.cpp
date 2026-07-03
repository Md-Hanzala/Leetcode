class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int siz = nums.size();
        vector<int> nega;
        vector<int> pos;
        for (int i = 0; i < siz; i++) {
            if (nums[i] >= 0)
                pos.push_back(nums[i]);
            else
                nega.push_back(nums[i]);
        }
        for (int i = 0; i < nega.size(); i++) {
            nega[i] = nega[i] * nega[i];
        }
        reverse(nega.begin(), nega.end());
        for (int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }
        if (pos.size() == 0) {
            return nega;
        }
        if (nega.size() == 0) {
            return pos;
        }
        int i = 0, j = 0;
        int id = 0;
        int n = nega.size();
        int m = pos.size();
        vector<int> res(n + m);
        while (i < n && j < m) {
            if (nega[i] < pos[j]) {
                res[id++] = nega[i++];
            } else {
                res[id++] = pos[j++];
            }
        }
        while (i < n) {
            res[id++] = nega[i++];
        }
        while (j < m) {
            res[id++] = pos[j++];
        }
        return res;
    }
};