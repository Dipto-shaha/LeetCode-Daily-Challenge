class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mid,cnt,i,li=0,hi=nums.size();
        while(li<=hi)
        {
            mid=(li+hi)/2;
            cnt=0;
            for(auto u:nums)
            {
                if(u<=mid)
                    cnt++;
            }
            if(cnt<=mid)
                li=mid+1;
            else
                hi=mid-1;
        }
        return li;
    }
};