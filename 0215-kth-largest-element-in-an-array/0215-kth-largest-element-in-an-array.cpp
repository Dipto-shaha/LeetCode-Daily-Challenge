class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int u:nums)
        {
            q.push(u*-1);
            if(q.size()>k) q.pop();
        }
        return q.top()*-1;
    }
};