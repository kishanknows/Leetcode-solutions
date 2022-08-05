class Solution(object):
    def isPalindrome(self, x):
        input=str(x)
        i=0
        while(i!=len(input)/2):
            if(input[len(input)-i-1]==input[i]):
                i=i+1
            else:
                result=False
                return result
        result=True
        return result
        """
        :type x: int
        :rtype: bool
        """
