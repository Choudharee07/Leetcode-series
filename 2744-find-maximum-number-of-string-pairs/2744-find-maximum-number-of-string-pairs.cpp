class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            string st=words[i];
            reverse(st.begin(),st.end());
            for(int j=i+1;j<words.size();j++){
                if(st== words[j]) count++;
            }
        }
        return count;
        
    }
};