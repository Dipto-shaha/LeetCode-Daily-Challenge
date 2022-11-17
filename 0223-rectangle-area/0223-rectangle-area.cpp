class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ans=0;
        ans+=abs(ax1-ax2)*abs(ay1-ay2);
        ans+=abs(bx1-bx2)*abs(by1-by2);
        int l,r,h,h2;
        l=max(ax1,bx1);
        r=min(ax2,bx2);
        h=max(by1,ay1);
        h2=min(by2,ay2);
        if(l<=r && h<=h2)
            ans-=(r-l)*(h2-h);
        return ans;
    }
};