class Solution:
    def isHappy(self, n: int) -> bool:
        seen=[]
        while(True):
            total=0
            for i in str(n):
                x=int(i)
                total+=x**2 
            
            if(total==1):return True
            if(total in seen):return False
            seen.append(total)
            n=total
            