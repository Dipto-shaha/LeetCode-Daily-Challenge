class Solution(object):
    def eliminateMaximum(self, dist, speed):
        time=[]
        for i in range(len(dist)):
            time.append(dist[i]/(1.0*speed[i]))
        time.sort()
        ans=0
        now=0
        for i in range(len(time)):
            if time[i]>now:
                ans+=1
            else:
                break
            now+=1
        return max(ans,1)
            
        