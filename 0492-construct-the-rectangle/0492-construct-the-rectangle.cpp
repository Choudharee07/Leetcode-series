class Solution {
public:
    vector<int> constructRectangle(int area) {
        int len,wid;
        for(int i=1;i<=sqrt(area);i++){
            if(area%i==0){
                len=area/i;
                wid=i;
            }
        }
        return {len,wid}; 
    }
};