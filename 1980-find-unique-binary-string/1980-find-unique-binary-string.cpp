class Solution {
public:
    string numberToBinary(int i,int n)
    {
        string ans="";
        while(i>0)
        {
            if(i%2==1)
                ans="1"+ans;
            else ans="0"+ans;
            n--;
            i=i/2;
        }
        while(n--) ans="0"+ans;
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(),nums.end());
        int i,n=nums.size(),temp,cnt;
        cnt=pow(2,n-1);
        for(i=0;i<n;i++)
        {
            cnt=pow(2,n-1);
            temp=0;
            for(auto u:nums[i])
            {
                if(u=='1')
                    temp+=cnt;
                cnt/=2;
            }
            if(temp==i)
                continue;
            else
              return  numberToBinary(i,n);
        }
        return numberToBinary(n,n);
    }
};