class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string cnt="";
        int i=0,n=path.size();
        for(i=0;i<n;i++)
        {
            if(path[i]=='/') 
            {
                if(cnt!="" && cnt!=".")
                st.push(cnt);
                cnt="";
            }
            else if(i>0 && path[i]=='.' && path[i-1]=='.')
            {
                if(i-2>=0 && path[i-2]=='/' &&  ((i+1<n && path[i+1]=='/') || i+1==n))
                {
                  
                    cnt="";
                    if(st.size()>0) st.pop();
                }
                else  cnt+=path[i];
            }
            else cnt+=path[i];
        }
        if(cnt!="" && cnt!=".")
           st.push(cnt);
        cnt="";
        while(st.size()>0)
        {
            cnt="/"+st.top()+cnt;
            st.pop();
        }
        if(cnt=="") cnt+="/";
        return cnt;
    }
};