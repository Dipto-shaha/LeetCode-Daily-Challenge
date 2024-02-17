class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>p;
        int sum=0,i,n=heights.size(),temp;
        for(i=1;i<n;i++)
        {
            if(heights[i]>heights[i-1])
            {
                temp=heights[i]-heights[i-1];
                p.push(temp);
                while(temp)
                {
                    if(bricks>=temp)
                        bricks-=temp,temp=0;
                    else if(ladders>0)
                    {
                        ladders--;
                        bricks+=p.top();
                        p.pop();
                    }
                    else return i-1;
                }  
            }
        }
        return n-1;    
    }
};