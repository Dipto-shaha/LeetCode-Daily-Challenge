class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1,i,n=num.size();
        for(i=2;i<n;i++)
        {
            if(num[i]==num[i-1] && num[i-1]==num[i-2])
                ans=max(ans,num[i]-'0');
        }
        if(ans==-1) return "";
        string s="";
        s=to_string(ans)+to_string(ans)+to_string(ans);
        return s;
    }
};