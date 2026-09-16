class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr[26] = {0};
        for (char c : chars) {
            arr[c - 'a']++;
        }

        int count = 0;
        for (const string& w : words) {
            int temp[26];
            copy(begin(arr), end(arr), begin(temp));  

            bool good = true;
            for (char c : w) {
                int val = c - 'a';
                if (temp[val] > 0) {
                    temp[val]--;
                } else {
                    good = false;
                    break;   
                }
            }
            if (good) count += w.length();
        }
        return count;
    }
};