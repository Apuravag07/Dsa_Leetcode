class Solution {
public:
    int largestInteger(vector<int>& A, int k) {
        int n = A.size(), freq[51] = {};

        for (int x : A)
            freq[x]++;

        int ans = -1;

        for (int i = 0; i < n; i++) {
            if (k == n || (freq[A[i]] == 1 &&
                (k == 1 || i == 0 || i == n - 1))) {
                ans = max(ans, A[i]);
            }
        }

        return ans;
    }
};