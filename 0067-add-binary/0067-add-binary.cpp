class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int temp=0,i=a.size()-1,j=b.size()-1;
        while(i>=0 || j>=0)
        {
            if(i>=0 && j>=0)
                temp+=a[i]-'0'+b[j]-'0',i--,j--;
            else if(i>=0)
                temp+=a[i]-'0',i--;
            else temp+=b[j]-'0',j--;
            //cout<<temp<<"\n";
            if(temp%2==0)
              ans+="0";
            else ans+="1";
            temp/=2;  
        }
        while(temp>0)
        {
            if(temp%2==0)
              ans+="0";
            else ans+="1";
              temp/=2;
        }
        reverse(ans.begin(),ans.end());
            return ans;

    }
};