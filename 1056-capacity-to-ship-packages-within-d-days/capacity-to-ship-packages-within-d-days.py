class Solution:
    def shipWithinDays(self, weights: list[int], days: int) -> int:
        def fun(w):
            day=1
            sum=0
            for i in  weights:
                if sum+i<=w:
                    sum=sum+i

                else:
                    day=day+1
                    sum=i

            return day<=days


        l=max(weights)
        r=sum(weights)
        ans=0

        while l<=r:
            
            mid=(l+r)//2
                

            if(fun(mid)):
                ans=mid
                r=mid-1

            else:
                l=mid+1
            

        return ans


        

        