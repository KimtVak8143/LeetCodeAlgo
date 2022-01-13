class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        new = {}
        for i in range(0,len(jewels)):
            try:
                new[jewels[i]]+=1
            except:
                new[jewels[i]]=1
        sum=0
        j=0
        for x in new:
            for j in range(len(stones)):
                if x==stones[j]:
                    sum+=1
        return sum