class Solution {
public:
    string replaceWords(vector<string>& dictionary, string s) {
        unordered_map<string,int>m;
        for(auto u:dictionary){
            m[u]++;
        }
        string temp="",ans="";
        int i,n=s.size();
        for(i=0;i<n;i++){
            temp+=s[i];
            if(s[i]==' ') ans+=temp,temp="";
            if(m[temp]){
                ans+=temp;
                while(i<n && s[i]!=' ') i++;
                if(i!=n) ans+=' ';
                temp="";
            }
        }
        if(temp!="") ans+=temp;
        return ans;
    }
};