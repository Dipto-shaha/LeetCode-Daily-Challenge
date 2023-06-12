class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int l,r,i,n=nums.size();
        if(n==0) return ans;
        l=nums[0];
        r=l;
        for(i=1;i<n;i++)
        {
            if(nums[i]==r+1)
                r=nums[i];
            else
            {
                if(l!=r)
                    ans.push_back(to_string(l)+"->"+to_string(r));
                else ans.push_back(to_string(l));
                l=nums[i];
                r=nums[i]; 
            }    
        }
        if(l!=r)
            ans.push_back(to_string(l)+"->"+to_string(r));
        else ans.push_back(to_string(l));
        return ans;
    } 
};