class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (int i = 0; i < 128; i++) {
            length += (freq[i] / 2) * 2;
            if (freq[i] % 2 == 1) {
                hasOdd = true;
            }
        }

        if (hasOdd) {
            length++;
        }

        return length;
    }
};