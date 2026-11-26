class Solution {
public:
    bool canAliceWin(int n) {
        int i=10;
        bool alice;
        while(true){
            if(i%2==0) alice=false;
            else alice =true;
            n-=i;
            i--;
            if(n<0) return alice;
        }  
        return true; 
    }
    
};