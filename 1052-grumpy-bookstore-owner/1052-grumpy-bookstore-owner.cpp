class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int min) {
        int i,n=grumpy.size(),ans=0,cnt=0;
        for(i=0;i<n;i++){
            if(i-min>=0 && grumpy[i-min])
              cnt-=customers[i-min];
            if(grumpy[i]) cnt+=customers[i];
                ans=max(ans,cnt);
        }
        cout<<ans<<"\n";
        for(i=0;i<n;i++){
            if(!grumpy[i]) ans+=customers[i];
        }
        return ans;
    }
};