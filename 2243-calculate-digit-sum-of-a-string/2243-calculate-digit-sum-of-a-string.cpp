class Solution {
public:
    string digitSum(string s, int k){
        int count =0;
        string str;
        int sum=0;
        if(s.length()<=k) return s;
        for(int i=0;i<s.length();i++){
            if(count!=k ){
                sum+= s[i]-'0'; 
                count++;
            }
            if(count==k || (count<k && i==s.length()-1)){
                str += to_string(sum);
                count=0;
                sum=0;
            }
        }
        string ans=digitSum(str,k);
        return ans;
    }
};