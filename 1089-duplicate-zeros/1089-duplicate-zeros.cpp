class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        vector<int>ans(len);
        int j=0;
        for(int i=0;i<len;i++){
            if(arr[i]==0){
                j+=2;
                len--;
            }
            else ans[j]=arr[i],j++;
        }
        arr=ans;
    }
};