class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=0)
        {
            if(fast->next==0) return false;
            fast=fast->next;
            if(fast->next==0)return false;
            fast=fast->next;
            
            slow=slow->next;
            if(fast==slow)return true;
        }

        return false;
    }
};
