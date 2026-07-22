class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        m=-float('inf')
        h=1
        l=1
        ph=1
        pl=1
        for i in nums:
            h=i*ph
            l=i*pl
            ph=max(i,l,h)
            pl=min(i,l,h)
            if m<ph:
                m=ph
        return m
        