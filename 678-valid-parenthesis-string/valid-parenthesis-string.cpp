class Solution {
public:
    int dp[101][101];

    bool f(string s, int index, int count) {
        if(count < 0) return false;

        if(index == s.size()) {
            return count == 0;
        }

        if(dp[index][count] != -1) {
            return dp[index][count];
        }

        if(s[index] == '(') {
            return dp[index][count] =
                f(s, index + 1, count + 1);
        }

        if(s[index] == ')') {
            return dp[index][count] =
                f(s, index + 1, count - 1);
        }

        return dp[index][count] =
            f(s, index + 1, count + 1) ||
            f(s, index + 1, count - 1) ||
            f(s, index + 1, count);
    }

    bool checkValidString(string s) {
        memset(dp, -1, sizeof(dp));
        return f(s, 0, 0);
    }
};