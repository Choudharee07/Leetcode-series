class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while (curr && curr->next) {
            ListNode* nxt = curr->next;
            curr->next = new ListNode(gcd(curr->val, nxt->val), nxt);
            curr = nxt;
        }
        return head;
    }
};