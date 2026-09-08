class Solution {
public:
    int countCommas(int n) {
        int count = 1;

        for (int i = 1; i <= n; i++) {
            if (i >= 1000) {
                count++;
            }
        }

        return count-1;
    }
};