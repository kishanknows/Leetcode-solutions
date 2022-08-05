class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = s.length()-1;
        int count =0;
        while(index>=0){
            if(s[index]!=' '){
                count++;
                index--;
                if(index!=-1){
                    continue;
                }
                
            }
            if(count!=0){
                return count;
            }
            index--;
        }
        return 0;
    }
};
