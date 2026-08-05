class Solution {
public:
    string convertToBase7(int num) {
        int base =0;
        int i = 0;
        int check = (num>=0)? 1:-1;
        num *=check;
        while(num>0){
            base = (num%7)*pow(10,i)+base;
            i++;
            num /= 7;
        }
        base *=check;
        return to_string(base);
    }
};