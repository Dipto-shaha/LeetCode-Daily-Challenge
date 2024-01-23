class Solution {
public:
    int ans;
    void fun(int i,vector<string>& arr,vector<int>&ch,int total)
    {
        if(i>=arr.size()) 
        {
            ans=max(ans,total);
            return ;
        }
        int flag=true;
        for(int j=0;j<arr[i].size();j++)
        {
            ch[arr[i][j]-'a']++;
            if(ch[arr[i][j]-'a']>1)
                flag=false;
        }
        fun(i+1,arr,ch, flag ? total+(int)(arr[i].size()):total);
        for(int j=0;j<arr[i].size();j++)
        {
            ch[arr[i][j]-'a']--;
        }
        fun(i+1,arr,ch,total);
    }
    int maxLength(vector<string>& arr) {
        vector<int>ch(26,0);
        ans=0;
        fun(0,arr,ch,0);
        return ans;
    }
};