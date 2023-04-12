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
                if(cnt=="..")
                {  
                    if(st.size()>0) st.pop();
                }
                else if(cnt!="" && cnt!=".")
                    st.push(cnt);
                cnt="";
            }
            else cnt+=path[i];
        }
         if(cnt=="..")
        {  
            if(st.size()>0) st.pop();
        }
        else if(cnt!="" && cnt!=".")
            st.push(cnt);
        cnt="";
        while(st.size()>0)
        {
            //cout<<st.top()<<"\n";
            cnt="/"+st.top()+cnt;
            st.pop();
        }
        if(cnt=="") cnt+="/";
        return cnt;
    }
};