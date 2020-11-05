class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
     
        ListNode *fast = head;
        ListNode *slow = fast;
        
        while(slow != NULL && fast != NULL && fast->next !=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
    
            if(slow == fast)
            {
                fast = fast;
                slow = head;

                while(slow != fast)
                {
                    slow = slow->next;
                    fast=fast->next;
                }
                 return slow;
            }  
        }
        return NULL;
    }
};