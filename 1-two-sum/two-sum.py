class Solution(object):
    def twoSum(self, nums, target):
        d={}
        for i in range(len(nums)):
            left=target-nums[i]
            if left in d:
                return [i,d[left]]


            else:
                d[nums[i]]=i   


      