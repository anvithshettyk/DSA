class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas)<sum(cost):
            return -1
        sumgas=0
        sumcost=0
        index=0
        for i in range(0,len(gas)):
            sumgas+=gas[i]
            sumcost+=cost[i]
            if sumgas<sumcost:
                sumgas=0
                sumcost=0
                index=i+1
        return index
        