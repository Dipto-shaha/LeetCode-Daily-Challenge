class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0,i=0,temp=(1<<0);
        while(temp<=c)
        {
            if(c & temp)
            {
                if((temp& a) || (temp&b))
                   ans;
                else ans++;
            }
            else
            {
                if(temp & a)ans++;
                if(temp & b) ans++;
            }
            i++;
            temp=(1<<i);
        }
        while(a>=temp || b>=temp)
        {
            if(a& temp)
                ans++;
            if(b& temp)
                ans++;
            i++;
            temp=(1<<i);
        }
        return ans;
    }
};