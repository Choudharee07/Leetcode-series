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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        int i=1;
        temp=head;
        ListNode* prev=NULL;
        while(i<=count-n && temp->next!=NULL){
            prev=temp;
            temp=temp->next;
            i++;
        }
        if(prev==NULL) head=temp->next;
        else{
            prev->next=temp->next;
        }
        delete temp;
        return head;


        
    }
};