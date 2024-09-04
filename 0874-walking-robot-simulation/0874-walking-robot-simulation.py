class Solution(object):
    def robotSim(self, commands, obstacles):
        dir = 0
        x , y = 0 , 0
        pair_set = {tuple(pair) for pair in obstacles}
        ans = 0   
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        for c in commands:
            if c == -1:
                dir = (dir+1)%4
            elif c == -2:
                dir = (dir-1+4)%4
            else:
                while c:
                    dx, dy = directions[dir]
                    x += dx
                    y += dy
                    if (x,y) in pair_set:
                        x -= dx
                        y -= dy
                        break
                    c -= 1
            #print(dir,x,y)
            ans = max(x*x+y*y,ans)
                        
                    
                
        return ans
        