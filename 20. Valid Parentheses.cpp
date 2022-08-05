class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stack.push(s[i]);
            }
            else if(stack.empty()){
                return false;
            }
            else{
                if(s[i]==')' && stack.top()=='('){
                    stack.pop();
                }
                else if(s[i]==']' && stack.top()=='['){
                    stack.pop();
                }
                else if(s[i]=='}' && stack.top()=='{'){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(stack.empty()){
            return true;
        }
        return false;
    }
};
