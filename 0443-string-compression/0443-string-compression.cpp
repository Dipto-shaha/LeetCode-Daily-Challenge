class Solution {
public:
    int compress(vector<char>& chars) {
        int i,n=chars.size(),val=1,j=0,cnt,temp;
        char ch=chars[0];
        for(i=1;i<n;i++)
        {
            if(chars[i]==ch)
                val++;
            else 
            {
                chars[j++]=ch;
                if(val>1)
                {
                    temp=val;
                    cnt=0;
                    while(val>0) cnt++,val/=10;
                    j=j+cnt;
                    cnt=j-1;
                    while(temp>0)
                    {
                        chars[cnt--]=temp%10+'0';
                        temp/=10;
                    }
                    val=1;
                }
                ch=chars[i];

            }
        }
        chars[j++]=ch;
        if(val>1){
        temp=val;
        cnt=0;
        while(val>0) cnt++,val/=10;
        j=j+cnt;
        cnt=j-1;
        while(temp>0)
        {
            chars[cnt--]=temp%10+'0';
            temp/=10;
        }}
        return j;
    }
};