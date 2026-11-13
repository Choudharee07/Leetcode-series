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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode *temp = head;
        ListNode * prev=NULL;
        ListNode *curr=head;
        int count =1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        k%=count;
        if (k == 0) return head;
        temp = head;
        int i=0;
        while(temp->next!=NULL){
            i++;
            prev = temp;
            temp=temp->next;
            if(i==count-k){
                prev->next=NULL;
                head=temp;
            }
        }
        temp->next=curr;
        return head;
    }
};