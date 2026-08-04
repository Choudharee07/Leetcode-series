class Solution {
public:
    bool isValid(string s) {
        vector<int>stack;
        int j=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]== '{') {
                stack.push_back(s[i]);
                j++;
            }
            else{
                if(j>-1){
                    if(s[i]==')' && stack[j]=='('
                    || s[i]=='}' && stack[j]=='{'
                    || s[i]==']' && stack[j]=='[' ) stack.pop_back(),j--;
                    else return 0;
                }else return 0;
            }
        }
        if(j==-1) return 1;
        else return 0;
        
    }
};