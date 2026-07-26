class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       
        int a[4];
        a[0]=nums[0]*nums[1]*nums[2];
        a[1]=nums[n-1]*nums[n-2]*nums[n-3];
        a[2]=nums[0]*nums[1]*nums[n-1];
        a[3]=nums[n-1]*nums[n-2]*nums[0];
        sort(a,a+4);
        return a[3];
       
        
    }
};