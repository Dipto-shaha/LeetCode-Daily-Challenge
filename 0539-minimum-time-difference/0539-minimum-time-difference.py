class Solution(object):
    def findMinDifference(self, timePoints):
        timePoints.sort()
        ans = 1000000
        h1 =  (ord(timePoints[0][0])-48)*10+ ord(timePoints[0][1])-48
        m1 =  (ord(timePoints[0][3])-48)*10+ ord(timePoints[0][4])-48
        
        first  = h1*60 + m1
        for i in range(1,len(timePoints)):
            h2 =  (ord(timePoints[i][0])-48)*10+ ord(timePoints[i][1])-48
            m2 =  (ord(timePoints[i][3])-48)*10+ ord(timePoints[i][4])-48
            temp = (h2-h1)*60
            if(m1>m2):
                temp-=60
                temp+=60+m2-m1
            else:
                temp+=m2-m1
            print(temp)
            ans =min(ans,temp)
            h1 = h2
            m1 = m2
        
        #print(first , h1, m1)
        first += (24-h1-1)*60 + 60-m1
        ans  = min(ans,first)    
        return ans
        