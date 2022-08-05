class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.empty()){
                mp.insert({nums[i],1});
            }
            else{
                if(mp.find(nums[i])==mp.end()){
                mp.insert({nums[i],1});
                }
                else{
                    return true;
                }
            }
        }
        return false;
    }
};
