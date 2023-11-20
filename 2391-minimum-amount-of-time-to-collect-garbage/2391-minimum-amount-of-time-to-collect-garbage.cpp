class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m=0,p=0,g=0,cnt=0,ans=0,i,n=garbage.size();
        for(i=0;i<n;i++)
        {
            if(i) cnt+=travel[i-1];
            for(auto s:garbage[i])
            {
                if(s=='M')
                    m=cnt;
                else if(s=='P')
                    p=cnt;
                else g=cnt;
                ans++;  
            }
        }
        return ans+m+p+g;
        
    }
};