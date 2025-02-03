class Solution {
public:
    ListNode *reverseList(ListNode *head) {
    ListNode *curr = head, *prev = nullptr, *next;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; 
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *newNode = reverseList(slow->next);
        ListNode *first = head;
        ListNode *second = newNode;
        while(second!=NULL){
        if(first->val != second->val){
            return false;
        } else{
            first = first->next;
            second = second->next;
           
        } 
    }
       return true;
    }
};
