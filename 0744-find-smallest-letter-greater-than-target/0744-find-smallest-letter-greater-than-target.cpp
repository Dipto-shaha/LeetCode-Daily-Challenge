class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        char ans=l[0];
        int mid,li=0,hi=l.size()-1;
        while(li<=hi)
        {
            mid=(li+hi)/2;
            if(l[mid]>t) {
                ans=l[mid];
                hi=mid-1;
            }
            else li=mid+1;
        }
        return ans;
    }
};