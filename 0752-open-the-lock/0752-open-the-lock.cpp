class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        
        map<string,int>m,block;
        for(auto u:deadends)
            block[u]++;
        queue<string>q;
        m["0000"]=0;
        q.push("0000");
        string s,temp;
        int ans=INT_MAX;
        while(!q.empty()){
            s = q.front();
            q.pop();
            if(block[s]) continue;
            if(s==target)
                ans=min(m[s],ans);
            for(int i=0;i<4;i++){
                temp=s;
                temp[i]=(s[i]=='9') ? '0' : (s[i]+1);
                if(!m[temp]){
                    m[temp]=m[s]+1;
                    q.push(temp);
                }
                temp[i]=(s[i]=='0') ? '9' :(s[i]-1);
                if(!m[temp]){
                    m[temp]=m[s]+1;
                    q.push(temp);
                }
            }
        }
        return ans==INT_MAX ?-1: ans;
    }
};