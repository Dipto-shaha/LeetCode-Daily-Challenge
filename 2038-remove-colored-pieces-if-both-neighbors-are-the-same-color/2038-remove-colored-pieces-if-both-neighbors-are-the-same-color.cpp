class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,i,n=colors.size();
        for(i=0;i+2<n;i++)
        {
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A' ) a++;
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B' ) b++;
        }
        return a>b;
    }
};