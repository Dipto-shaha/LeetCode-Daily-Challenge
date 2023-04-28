class Solution {
public:
    bool cmp(string &x,string &y)
    {
        int cnt=0,i=0;
        while(i<x.size())
        {
            if(x[i]!=y[i]) cnt++;
            i++;
        }
        return (cnt==2 || cnt==0) ?   true :  false;
    }
    int numSimilarGroups(vector<string>& s) {
        int n=s.size(),ans=0,i,j;
        vector<bool>visit(n,false);
        queue<int>q;
        for(i=0;i<n;i++)
        {
            if(visit[i]) continue;
            else
            {
                ans++;
                visit[i]=true;
                q.push(i);
                while(!q.empty())
                {
                    auto u=s[q.front()];
                    q.pop();
                    for(j=0;j<n;j++)
                    {
                        if(cmp(s[j],u) && !visit[j])
                        {
                            q.push(j);
                            visit[j]=true;
                        }
                    }
                }
            }
        }
        return ans;
    }
};