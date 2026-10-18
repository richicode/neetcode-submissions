class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a=0
        x=len(digits)-1
        ans=[]
        for i in digits:
            a+=i*10**x
            x-=1
        a+=1
        # output
        for i in str(a):
            ans.append(int(i))
        return ans
