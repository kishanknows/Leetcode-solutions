class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        map<char,int> mp;
        int maxlen = 0;
        for(int i=0;i<length;i++){
            for(int j=i;j<length;j++){
                if(mp.empty()){
                    mp.insert({s[j],j});
                }
                else{
                    auto itr = mp.find(s[j]);
                    if(itr==mp.end()){
                        mp.insert({s[j],j});
                    }
                    else{
                        int len=mp.size();
                        maxlen = max(maxlen,len);
                        mp.clear();
                        break;
                    }
                }
            }
        }
        if(length==1){
            return 1;
        }
        return maxlen;
    }
};
