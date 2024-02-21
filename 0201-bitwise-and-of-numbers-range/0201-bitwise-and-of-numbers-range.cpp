class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int i,ans=0;
        for(i=31;i>=0;i--)
        {
            if(((1<<i)&left) == ((1<<i)&right))
            {
                if((1<<i)&left)
                    ans|=1<<i;
            }
            else break;
        }
        return ans;
    }
};