class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayptr=0;
        int needptr=0;
        int ptrstart =0;
        char init = needle[0];
        vector<int> startindex;
        while(hayptr<haystack.length()){
            if(haystack[hayptr]==init){
                startindex.push_back(hayptr);
            }
            hayptr++;
        }
        if(startindex.empty()){
            return -1;
        }
        if(haystack.size()<needle.size()){
            return -1;
        }
        hayptr = startindex[0];
        int index = 0;
        while(index<startindex.size()){
            if(haystack[hayptr]==needle[needptr]){
                needptr++;
                hayptr++;
                if(needptr==needle.length())
                    return startindex[index];
            }
            else if(hayptr==(haystack.length()-1)){
                return -1;   
            }
            else{
                needptr=0;
                index++;
                if(index==startindex.size()){
                    return -1;
                }
                hayptr = startindex[index];
            }
        }
        if(needle.length()==0){
            return 0;
        }
        return -1;
    }
};
