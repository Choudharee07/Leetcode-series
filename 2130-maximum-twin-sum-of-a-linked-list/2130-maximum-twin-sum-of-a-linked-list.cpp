/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *temp=head;
        vector<int>value;
        while(temp!=NULL){
            value.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=value.size()-1;
        int sum,ans=0;
        while(i<j){
            sum=value[i]+value[j];
            i++,j--;
            ans = max(ans,sum);
        }
        return ans;
    }
};