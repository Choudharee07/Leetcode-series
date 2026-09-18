class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int max = arr[len-1];
        int current;
        arr[len-1] = -1;
        for(int i=len-2;i>=0;i--){
            current = arr[i];
            arr[i]=max;
            if(current>max) max=current;  
        }
        return arr;
    }
};