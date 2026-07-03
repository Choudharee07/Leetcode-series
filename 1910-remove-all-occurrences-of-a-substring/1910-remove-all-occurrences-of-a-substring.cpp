class Solution {
public:
    string removeOccurrences(string s, string part) {
        int len = part.length();
        int index;
        while(index=s.find(part)!= string::npos){
            index=s.find(part);
            s.erase(index,len);
        }
        return s;
        
    }
};