class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       int n=nums.size();
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int solution=0;
        while((1<<(solution+1))<=n)
        {
            solution++;
        }
        int res=1<<(solution+1);
        return res;
    }
};