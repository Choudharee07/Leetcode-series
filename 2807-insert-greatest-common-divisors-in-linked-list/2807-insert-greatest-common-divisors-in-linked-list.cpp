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
    void insert(int val,int pos,ListNode* head){
        ListNode* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        ListNode* newNode = new ListNode(val);
        newNode->next = temp->next;
        temp->next=newNode; 

    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* curr=NULL;
        ListNode* nxt=head;
        int idx=-1;
        while(nxt->next!=NULL){
            curr=nxt;
            nxt=nxt->next;
            idx+=2;
            int value=gcd(curr->val,nxt->val);
            insert(value,idx,head);
        }
        return head;
    }
};