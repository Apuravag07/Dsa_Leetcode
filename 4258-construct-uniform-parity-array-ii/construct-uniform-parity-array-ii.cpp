class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd=true;
        bool even =true;
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++)
            {
                if(nums1[i]%2==0)
                {
                    odd=false;
                }
                else
                {
                    even=false;
                }
            }
        int mini=INT_MAX;
        int mini2=INT_MAX;
        for(int i=0;i<nums1.size();i++)
            {
                if(nums1[i]%2==0)
                {
                    mini2=min(mini2,nums1[i]);
                }
                else
                {
                    mini=min(mini,nums1[i]);
                }
            }
        if(odd==true || even==true)
        {
            return true;
        }
        if(mini<mini2)
        {
            return true;
        }
       return false; 
    }
};