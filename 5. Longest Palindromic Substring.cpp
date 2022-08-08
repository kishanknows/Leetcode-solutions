class Solution {
public:
    string longestPalindrome(string s) {
        int max=0,start=0;
        if(s.length()==1){
            return s;
        }
        else if(s.length()==2){
            if(s[0]==s[1]){
                return s;
            }
            else{
                return s.substr(0,1);
            }
        }
        int dp[s.length()][s.length()];
        for(int i=0;i<s.length();i++){
            dp[i][i]=1;

            if(i<s.length()-1){
                if(s[i]==s[i+1]){
                    dp[i][i+1]=1;
                    start = i;
                    max = 1;
                }
                else{
                    dp[i][i+1]=0;
                }
            }    
        }
        for(int k=2;k<s.length();k++){
            for(int i=0;i<s.length()-k;i++){
                if(s[i]==s[i+k] && dp[i+1][i+k-1]==1){
                    dp[i][i+k]=1;
                    start = i;
                    max = k;
                }
                else{
                    dp[i][i+k]=0;
                }
            }
        }
        return string(&s[start],&s[start+max+1]);
        // return s.substr(start,start+max);
        
    }
};
