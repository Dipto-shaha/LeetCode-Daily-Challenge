class Solution {
public:
    string convert(string s, int row) {
        if(row==1) return s;
        int n=s.size(),i=0,j=0,cnt=2*row-2,t;
        string ans="";
        for(i=0;i<row;i++)
        {
            for(j=i;j<n;j+=cnt)
            {  
               //cout<<i<<" "<<j<<" "<<s[j]<<"\n";
               ans+=s[j];
               if(i==0 || i==row-1)
                   continue;
               else if(j+cnt-2*i<n)
                   ans+=s[j+cnt-2*i];
            }
            //cnt--;
        }
        return ans;
    }
};