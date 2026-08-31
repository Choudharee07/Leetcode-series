class Solution {
public:
    int countTriples(int n) {
        int count=0;
        int c,cSq;
        for(int a=1;a<n;a++){
            for(int b=a+1;b<n;b++){
                cSq = a*a +b*b;
                c= sqrt(cSq);
                if(c<=n && c*c==cSq) count++;     
            }
        }
        return count*2; 
    }
};