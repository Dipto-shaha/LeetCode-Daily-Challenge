class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        int i,n=p.size(),ans=0,x;
        priority_queue<int> q;
        for(i=0;i<n;i++)
        {
            q.push(p[i]);
            ans+=p[i];
        }
        while(k--)
        {
            x=q.top();
            q.pop();
            ans-=x/2;
            q.push((x+1)/2);
        }
        return ans;
    }
};