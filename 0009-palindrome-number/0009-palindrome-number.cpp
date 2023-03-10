class Solution {
public:
    bool isPalindrome(int x) {
        long  temp=x,ans=0;
        while(x>0)
        {
            ans=ans*10+x%10;
            x/=10;
        }
        if(ans==temp) return true;
        return false;
    }
};