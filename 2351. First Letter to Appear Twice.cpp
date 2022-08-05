class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, char> mp;
        map<char, char>::iterator it;
        for(int i=0;s[i]!='\0';i++){
            it = mp.find(s[i]);
            if(it==mp.end()){
                mp.insert({s[i],s[i]});
            }
            else{
                return s[i];
            }
        }
        return '0';
    }
};
