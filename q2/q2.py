class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        new =[]
        sum1=0
        rest = sum(nums)
        nums.sort()
        while sum1<=rest:
            temp = nums.pop()
            new.append(temp)
            sum1+=temp
            rest-=temp
        return new