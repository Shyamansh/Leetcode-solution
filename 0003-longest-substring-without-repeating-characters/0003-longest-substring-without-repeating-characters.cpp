class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a = s.size();
        std::string tp;
        int len = 0;
        int temp = 0;

        if (a == 0) {
            return 0;
        }

        for (int i = 0; i < a; ++i) {
            if (tp.find(s[i]) == std::string::npos) {
                tp += s[i];
                ++temp;
            } else {
                len = std::max(len, temp);
                while (tp.find(s[i]) != std::string::npos) {
                    tp.erase(0, 1);
                    --temp;
                }
                tp += s[i];
                ++temp;
            }
        }

        len = std::max(len, temp);

        return len;
    }
};