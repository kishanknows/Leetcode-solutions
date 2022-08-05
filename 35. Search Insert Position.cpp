class Solution {
public:
    int search(vector<int> & vec,int left, int right, int val){
        int mid = left + (right-left)/2;
        if(left>=right){
            if(left==vec.size()-1 && val>vec[left]) {
                return left+1;
            }
            else{
                return left;
            }
        }
        else{
            if(val>vec[mid]){
                left = mid+1;
                return search(vec,left,right,val);
            }
            else{
                right = mid;
                return search(vec,left,right,val);
            }
        }     
    }
    int searchInsert(vector<int>& nums, int target) {
        return search(nums,0,nums.size()-1,target);
    }
};
