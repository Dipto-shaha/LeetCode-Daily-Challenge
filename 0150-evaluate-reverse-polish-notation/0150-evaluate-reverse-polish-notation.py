class Solution(object):
    def evalRPN(self, tokens):
        number = []
        for s in tokens:
            if s in ["+","-","/","*"]:
                x = number.pop()
                y =  number.pop()
                if s=="+":
                    number.append(y+x);
                elif s=="-":
                    number.append(y-x);
                elif s=="*":
                    number.append(y*x);
                else:
                    number.append(int(float(y)/x))
            else:
                number.append(int(s))
            #print(number)
        return number[0]
                                                       
                    
                    
            
        