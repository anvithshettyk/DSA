class Solution:
    def minEatingSpeed(self, piles: list[int], hour: int) -> int:
        def fun(n):
            h=0
            for i in piles:
                if i<=n:
                    h=h+1

                else:
                    q=i//n
                    rem=i%n

                    if rem==0:
                        h=h+q

                    else:
                        h=h+q+1
            return h<=hour
        l=1
        r=max(piles)
        while l<=r:
            
        
            mid=(l+r)//2
            if(fun(mid)):
               
            
                r=mid-1
            
            else:
                l=mid+1

        return l
        
        