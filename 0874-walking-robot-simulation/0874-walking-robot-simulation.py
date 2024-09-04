class Solution(object):
    def robotSim(self, commands, obstacles):
        dir = 0
        x , y = 0 , 0
        pair_set = {tuple(pair) for pair in obstacles}
        ans = 0    
        for c in commands:
            if c == -1:
                dir = (dir+1)%4
            elif c == -2:
                dir = (dir-1+4)%4
            else:
                while c:
                    if dir == 0:
                        y+=1
                        if (x,y) in pair_set:
                            y-=1
                            break
                    elif dir == 1:
                        x+=1
                        if (x,y) in pair_set:
                            x-=1
                            break
                    elif dir == 2:
                        y-=1
                        if (x,y) in pair_set:
                            y+=1
                            break
                    else:
                        x-=1
                        if (x,y) in pair_set:
                            x+=1
                            break
                    c-=1
            
            #print(dir,x,y)
            ans = max(x*x+y*y,ans)
                        
                    
                
        return ans
        