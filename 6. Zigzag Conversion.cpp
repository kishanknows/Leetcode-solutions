class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string parts[numRows];
        string answer;
        for(int i=0;i<s.length();i++){
            if(i%(2*numRows-2)>(numRows-1)){
                parts[(2*numRows-2)-i%(2*numRows-2)] += s[i];
            }
            else{
                parts[i%(2*numRows -2)] += s[i];
            }

        }
        for(int i=0;i<numRows;i++){
            answer += parts[i];
        }
        return answer;
    }
};
