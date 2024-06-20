class Solution {
public:
    int check(vector<int>&pos,int t,int n,int m){
        int last=pos[0];
        m--;
        for(int i=0;i<n;i++){
            if(pos[i]-last>=t){
                m--;
                last=pos[i];
            }
        }
        return m<=0;
    }
    int maxDistance(vector<int>& position, int m) {
        int i, n = position.size();
        sort(position.begin(),position.end());
        long int li=1,hi=1e9,mid,ans=0;
        while(li<=hi){
            mid=(li+hi)/2;
            if(check(position, mid,n,m)){
                ans=max(ans,mid);
                li=mid+1;
            }
            else hi=mid-1;
        }
        return ans;
    }
};