class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* curr = head;
        while (curr->next != NULL) {
            if (curr->next->val == curr->val) {
                ListNode* dup = curr->next;
                curr->next = curr->next->next;
                delete dup;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};