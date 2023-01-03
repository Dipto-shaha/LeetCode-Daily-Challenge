class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
       int n=strs[0].size(),m=strs.size(),i,j,ans=0;
       char ch;
       for(i=0;i<n;i++)
       {
           j=1;
           ch=strs[0][i];
           while(j<m)
           {
               if(strs[j][i]<ch)
                  { ans++;break;}
               ch=strs[j][i];
               j++;
           }
       }
       return ans;
    }
};