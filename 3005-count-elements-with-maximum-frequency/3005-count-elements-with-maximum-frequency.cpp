class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int arr[101];
        for(int val:nums){
            arr[val]++;
        }
        int count= 0;
        int maxi=0;
        for(int val:arr){
            if(val>maxi) count=val,maxi=val;
            else if(val==maxi) count+=val;
        }
        return count;    
    }
};