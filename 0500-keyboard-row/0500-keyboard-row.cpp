class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        vector<string> res;

        for (string s : words) {
            char first = tolower(s[0]);
            string check;
            if (s1.find(first) != string::npos) check = s1;
            else if (s2.find(first) != string::npos) check = s2;
            else check = s3;

            bool x = true;             
            for (char c : s) {
                if (check.find(tolower(c)) == string::npos) {
                    x = false;
                    break;
                }
            }
            if (x) res.push_back(s);    
        }
        return res;
    }
};