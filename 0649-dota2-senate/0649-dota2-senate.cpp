class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r,d;
        int i=0;
        for(auto u:senate)
        {
             if(u=='R')
                  r.push(i++);
            else d.push(i++);
        }
        while(!d.empty() && !r.empty())
        {
            if(d.front()<r.front())
                d.push(i++);
            else r.push(i++);
            r.pop();d.pop();
        }
        if(d.size()>0)  return "Dire";
        return "Radiant";
    }
};