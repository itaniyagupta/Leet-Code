class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* first = head;
        ListNode* second = head;
            int i = 0;
            while (second) 
            {
            i++;
            second = second->next;
            }
            int j= 0;
            if(i==n) 
            {
             return head->next;   
            }    
            while (j < i-n -1) 
            {
            first = first->next;
            j++; 
            }      
        first->next = first->next->next;
        return head;
    }
};