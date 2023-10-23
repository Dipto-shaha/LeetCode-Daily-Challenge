class Solution {
public:
    bool isPowerOfFour(int n) {
        long int temp=1,cnt;
        while(temp<=n)
        {
            if(temp==n) return true;
            temp*=4;
        }
        return false;
    }
};