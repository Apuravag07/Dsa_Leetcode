class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int original=n;
        int product=1;
        while(n!=0)
        {
            int r=n%10;
            n=n/10;
            product*=r;
            sum+=r;
        }
        int total=product+sum;
        if(total==0)
        {
            return false;
        }
        else if(original%total==0)
        {
            return true;
        }
        return false;
    }
};