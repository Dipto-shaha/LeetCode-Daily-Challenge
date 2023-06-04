class Solution {
public:
    void dfs(int u, vector<vector<int>>& isConnected,vector<int>&isVisit,int n)
    {
        for(int i=0;i<n;i++)
        {
            if( i!=u && isConnected[u][i]==1 && !isVisit[i])
            {
                isVisit[i]=1;
                dfs(i,isConnected,isVisit,n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),i,ans=0;
        vector<int>isVisit(n,0);
        for(i=0;i<n;i++)
        {
            if(!isVisit[i]){
                isVisit[i]=1;
                dfs(i,isConnected,isVisit,n);
                ans++;
            }
                
        }
        return ans;
    }
};