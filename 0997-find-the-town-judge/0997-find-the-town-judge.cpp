class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        set<int>s;
        map<int,int>m;
        int ans;
        bool flag=false;
        for(auto u:trust)
        {
            s.insert(u[0]);
            m[u[1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            {
                if(flag) return -1;
                if(m[i]==n-1)
                    ans=i,flag=true;
            }
        }
        if(flag) return ans;
        return -1;
    }
};