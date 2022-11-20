class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        stack<int>ans;
        st.push(1);
        int i,n=s.size(),temp,flag=1;
        for(i=0;i<n;i++)
        {
            if(s[i]==' ')
                continue;
            if(s[i]>='0' && s[i]<='9')
            {
                temp=0;
                if(!flag) st.push(1);
                while(s[i]>='0' && s[i]<='9')
                {
                    temp=temp*10+(s[i]-'0');
                    i++;
                }
                ans.push(temp);
                i--;
            }
            else if(s[i]=='(')
            {
               flag=0;
               st.push(0);
            }
            else if(s[i]=='-')
                st.push(-1),flag=1;
            else if(s[i]=='+')
                st.push(+1),flag=1;
            else if(s[i]==')')
            {
                temp=0;
                while(st.top()!=0)
                {
                    temp+=st.top()*ans.top();
                    ans.pop();
                    st.pop();
                }
                st.pop();
                ans.push(temp);
            }
                
        }
        temp=0;
        while(!ans.empty()) temp+=st.top()*ans.top(),st.pop(),ans.pop();
        return temp;
    }
};