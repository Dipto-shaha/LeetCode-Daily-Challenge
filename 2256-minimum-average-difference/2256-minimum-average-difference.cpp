class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long int i,n=nums.size(),sum=0,mn,ans,temp=0;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        mn=INT_MAX;
        for(i=0;i<n;i++)
        {
            temp+=nums[i];
            if(i+1==n) 
            {
                if(mn>abs(temp/(i+1)))
                   ans=i;
            }
            else if(mn>abs((temp/(i+1))-((sum-temp)/(n-i-1))))
            {
                mn=abs((temp/(i+1))-((sum-temp)/(n-i-1)));
                ans=i;
            }
        }
        return ans;
    }
};