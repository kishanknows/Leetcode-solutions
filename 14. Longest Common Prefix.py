class Solution(object):
    def longestCommonPrefix(self, strs):
        import numpy as np
        for i in range(len(strs[0]),0,-1):
            arr=[]
            for item in strs:
                arr.append(item[:i])
            x=np.array(arr)
            if(len(np.unique(x))==1):
                return arr[0]   
        return ""        
            
        """
        :type strs: List[str]
        :rtype: str
        """
