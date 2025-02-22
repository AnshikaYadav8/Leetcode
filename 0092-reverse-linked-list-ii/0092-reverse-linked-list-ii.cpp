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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       if(!head || right==left) return head;
       ListNode* dummy = new  ListNode(0);
       ListNode* beforeLeft = dummy;
       dummy->next = head;
       for(int i=0; i<left-1; i++){
        beforeLeft = beforeLeft->next;
       }
       ListNode* prev = NULL;
       ListNode* cur = beforeLeft->next;
       ListNode* next = NULL;
       for(int i=left; i<=right; i++){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
       }
       beforeLeft->next->next=cur;
       beforeLeft->next=prev;
       return dummy->next;
    }
};