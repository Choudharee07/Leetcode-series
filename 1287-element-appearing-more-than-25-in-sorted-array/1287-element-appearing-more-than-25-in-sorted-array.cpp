class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int count=0;
        int check=arr[0];
        for(int val:arr){
            if(val==check) count++;
            else{
                check=val;
                count=1;
            }
            if(count > size/4) return val;
        }
        return -1;    
    }
};