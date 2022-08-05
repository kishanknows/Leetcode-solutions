class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int numptr=0;
        int kptr=1;
        while(numptr<nums.size()-1 && nums.size()>1){
            if(nums[numptr]<nums[numptr+1]){
                nums[kptr]=nums[numptr+1];
                kptr++;
            }
            numptr++;
        }
        return kptr;
    }
};
