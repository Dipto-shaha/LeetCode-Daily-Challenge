class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        int i=0,j=p.size()-1,ans=0,temp;
        sort(p.begin(),p.end());
        while(i<=j)
        {
          if(j>=1 && p[j]+p[j-1]<=l)
              j-=2,ans++;
           else if(p[i]+p[j]<=l)
               ans++,i++,j--;
           else ans++,j--;
        }
        return ans;
    }
};