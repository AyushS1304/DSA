// Time Complexity:O(n)
// Space Complexity:O(1)

class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        string res = "";
        for (int i = 0; i + 2 < n; i++) {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2] &&
                num[i] == num[i + 2]) {
                string cur = num.substr(i, 3);
                if (cur > res) {
                    res = cur;
                }
            }
        }
        return res;
    }
};