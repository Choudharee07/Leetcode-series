class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        string s="";
        int position,sum=0;
        int ans=INT_MAX;
        vector<string> result;
        for(int i=0;i<list1.size();i++){
            s = list1[i];
            auto it=find(list2.begin(),list2.end(),s);
            if(it!=list2.end()){
                position=distance(list2.begin(),it);
            }else continue;
            sum= i+ position;
            if(ans>sum){
                ans=sum;
                result.clear();
                result.push_back(s);
            } else if(ans==sum){
                result.push_back(s);
            }
        }
        return result;
    }
};