class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(auto u:stones)
        {
            q.push(u);
        }
        int x,y;
        while(q.size()>1)
        {
            x=q.top();
            q.pop();
            y=q.top();
            q.pop();
            if(x==y) continue;
            else q.push(abs(x-y));
        }
        return q.size()==0?0:q.top();
    }
};