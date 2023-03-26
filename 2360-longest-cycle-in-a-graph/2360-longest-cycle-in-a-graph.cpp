class Solution {
public:
    vector<int>g,visit;
    int ans=-1;
    void dfs(int u,int cnt,unordered_map<int,int>&pos)
    {
        visit[u]=1;
        pos[u]=cnt;
        if(g[u]==-1) return;
        if(!visit[g[u]]) 
            dfs(g[u],cnt+1,pos);
        else if(pos.count(g[u])) 
            ans=max(ans,cnt-pos[g[u]]+1);
    }
    int longestCycle(vector<int>& edges) {
        g=edges;
        int n=edges.size();
        visit.resize(n,0);
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int>pos;
            dfs(i,0,pos);
        }
        return ans;
    }
};