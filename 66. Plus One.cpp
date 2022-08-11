class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.back()==9){
            int i = digits.size()-1;
            int carry =1;
            while(i>=0){
                int temp = digits[i];
                digits[i]=(digits[i]+carry)%10;
                carry = (temp+carry)/10;
                
                i--;
            }
            if(carry == 1){
                digits.insert(digits.begin(),1);
            }
            return digits;
        }
        digits.back()+=1;
        return digits;
    }
};
