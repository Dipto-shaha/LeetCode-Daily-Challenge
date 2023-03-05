class Solution {
public:
    int minJumps(vector<int>& nums) {
        int i,n=nums.size(),ans=0;
        if( n==1 ) return 0;
        map<int,vector<int>>m;
        for(i=0;i<n;i++)
        {
            m[nums[i]].push_back(i);
        }
        queue<int>q;
        q.push(0);
        bool flag[n];
        memset(flag,true,sizeof(flag));
        flag[0]=false;
        while(!q.empty())
        {
            int t=q.size();
            ans++;
            while(t--)
            {
                int u=q.front();
                q.pop();
                vector<int>&temp=m[nums[u]];
                if(u>0) temp.push_back(u-1);
                if(u+1<n)temp.push_back(u+1);
                for(auto x:temp)
                {
                    if(x==n-1) return ans;
                    if(flag[x])
                    {
                        q.push(x);
                        flag[x]=false;
                    }
                }
                temp.clear();
            }
        }
        return ans;
    }
};