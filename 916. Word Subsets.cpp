class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> output;
        vector<int> freq2(26,0);
        for(int i=0;i<words2.size();i++){
            string str = words2[i];
            vector<int> temp(26,0);
            for(int j=0;str[j]!='\0';j++){
                temp[str[j]-'a']++;
                freq2[str[j]-'a'] = max(freq2[str[j]-'a'],temp[str[j]-'a']);
            }
        }
        for(int i=0;i<words1.size();i++){
            string str = words1[i];
            vector<int> temp(26,0);
            for(int j=0;str[j]!='\0';j++){
                temp[str[j]-'a']++;
            }
            for(int j=0;j<26;j++){
                if(temp[j]<freq2[j]){
                    goto here;
                }
            }
            output.push_back(str);
            here:;
        }
        return output;
    }
};
