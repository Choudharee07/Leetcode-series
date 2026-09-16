class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int val:arr){
            freq[val]++;
        }
        int maxi=-1;
        for(auto & [val,count]:freq){
            if(val==count) maxi=max(val,maxi);
        }
        return maxi;
    }
};