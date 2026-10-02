class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>seen;
        unordered_set<string>check;
        int i=0;
        for(char c:pattern){
            string str="";
            while(s[i]!=' ' && i<s.length()){
                str+=s[i];
                i++;
            }
            i++;
            if(seen.count(c) && seen[c]!=str){
                return false;
            }
            else if(!seen.count(c) &&  !check.count(str)){
                seen[c]=str;
                check.insert(str);
            }
            else if(!seen.count(c) &&  check.count(str)){
                return false;
            }
        }
        
        return i==s.length()+1?true:false;
    }
};