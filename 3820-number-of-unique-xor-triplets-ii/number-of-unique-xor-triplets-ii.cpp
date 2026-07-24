class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       

        vector<bool> possible(3001, false);

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                possible[nums[i] ^ nums[j]] = true;
            }
        }

        vector<bool> newposs(3001, false);

        for (int i = 0; i <= 3000; i++) {
            for (int j = 0; j < nums.size(); j++) {
                int x = i ^ nums[j];
                if (x <= 3000 && possible[x]) {
                    newposs[i] = true;
                    break; // optimization: no need to check further
                }
            }
        }

        return count(newposs.begin(), newposs.end(), true);
    }
};