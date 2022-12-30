class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    int vis[20];
    void fun(vector<vector<int>>& graph,int s,int d)
    {
        if(vis[s]) return;
        if(s==d)
            ans.push_back(temp);
        else
        {
            for(auto u:graph[s])
            {
                if(!vis[u])
                {
                    temp.push_back(u);
                    //cout<<u<<" ";
                    fun(graph,u,d);
                    temp.pop_back();
                }
            }
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        memset(vis,0,sizeof(vis));
        temp.push_back(0);
        fun(graph,0,n-1);
        return ans;
    }
};