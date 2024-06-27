class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int mx=0,ans=0,n=edges.size()+2;
        vector<int>cnt(n,0);
        for(auto u:edges){
            cnt[u[0]]++;
            cnt[u[1]]++;
        }
        
        for(int i=1;i<n;i++){
            if(mx<cnt[i]){
                ans=i;
                mx=cnt[i];
            }
        }
        return ans;
    }
};