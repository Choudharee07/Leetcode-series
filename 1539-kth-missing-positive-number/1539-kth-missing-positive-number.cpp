class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len = arr.size();
        int count=0;
        int i=0,j=1;
        while(count<k){
            if( i<len && j==arr[i]) i++;
            else {
                count++;
            };
            if(count==k) return j;
            j++;
        }
        return -1;
    }
};