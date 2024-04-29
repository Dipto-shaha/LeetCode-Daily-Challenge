class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0,cnt=0,i=0,temp;
        for(auto u:nums){
            cnt=cnt^u;
        }
        while(1){
            temp=1<<i;
            if(k<temp && cnt<temp )
                break;
            if( !((k& temp) == (cnt& temp) ))
                ans++;
            i++;
        }
        return ans;
    }
};