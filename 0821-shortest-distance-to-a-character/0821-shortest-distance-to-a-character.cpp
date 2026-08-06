class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>dis;
        vector<int>pos;
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c) pos.push_back(i);
        }
        for(int i=0;i<s.length();i++){
            if(i>pos[j] && j<pos.size()-1 && (pos[j+1]-i) < (i-pos[j])) j++;
            dis.push_back(abs(pos[j]-i));
        }
        return dis;
    }
};