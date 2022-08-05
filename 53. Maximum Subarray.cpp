class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int sum =0;
        for(int j=0;j<nums.size();j++){
            if(sum<0){
                sum = 0;
            }
            sum += nums[j];
            maxsum = max(maxsum,sum);
            
        }
        return maxsum;  
    }
};
