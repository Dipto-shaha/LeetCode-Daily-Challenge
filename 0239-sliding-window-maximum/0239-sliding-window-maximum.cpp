class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       if(k==1) return nums;
       deque<pair<int,int>>q;
       vector<int>ans;
       int last=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
           //cout<<i<<"\n";
           while(!q.empty() && (q.front().second<i-k+1  || q.front().first<last))
           {
              // cout<<"Remove for out of bound "<<q.front().first<<"\n";
               q.pop_front();
           }
           while(!q.empty() && q.back().first<=nums[i])
           {
               //cout<<"Remove for Small Element "<<q.front().first<<"\n";
               q.pop_back();
           }
           q.push_back({nums[i],i});
           last=nums[i];
           if(i-k+1<0) continue;
           ans.push_back(q.front().first);
       }
       return ans;
    }
};