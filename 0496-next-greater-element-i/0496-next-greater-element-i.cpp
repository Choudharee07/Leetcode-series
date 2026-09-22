class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        for(int k=0;k<nums1.size();k++){
            while(i<nums2.size()){
                bool check =false;
                if(nums1[k]==nums2[i]){
                    for(int j=i+1;j<nums2.size();j++){
                        if(nums2[j]>nums1[k]){
                            nums1[k]=nums2[j];
                            check =true;
                            break;
                        }
                    }
                    if(!check) nums1[k]=-1;
                    i=0;
                    break;
                }else i++;
            }
        }     
        return nums1;
    }
};