class Solution(object):
    def twoSum(self, nums, target):
        num1=0
        for i in range(len(nums)):
            num1=nums[i]
            for j in range(i+1,len(nums)):
                if((target-num1)==nums[j]):
                    return [i,j]

        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
