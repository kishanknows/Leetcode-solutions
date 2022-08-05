class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        while(index<nums.size()){
            if(nums[index]==val){
                nums.erase(nums.begin()+index);
            }
            else{
                index++;
            }
        }
        return index;
    }
};
