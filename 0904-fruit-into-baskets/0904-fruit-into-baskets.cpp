class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0,i,n=fruits.size(),cnt=0;
        set<int>q;
        map<int,int>m;
        for(i=0;i<n;i++)
        {
            q.insert(fruits[i]);
            m[fruits[i]]=i;
            if(q.size()<=2)
            {
                cnt++;
                ans=max(ans,cnt);
            }
            else 
            {
                for(auto u:q)
                {
                    if(u==fruits[i] || u==fruits[i-1])
                        continue;
                    else 
                    {
                        q.erase(u);
                        cnt=i-m[u];
                        break;
                    }
                }
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};