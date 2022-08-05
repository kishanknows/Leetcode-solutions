class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int value=0;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])->second < mp.find(s[i+1])->second){
                value = value - mp.find(s[i])->second;
            }
            else{
                value = value + mp.find(s[i])->second;
            }
        }
        return value;
    }
};
