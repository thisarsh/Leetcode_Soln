/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      
       struct ListNode *fast=head; 
       struct ListNode *slow=head; 
       while(fast && fast->next){

        if( fast->next->next!=NULL)fast=fast->next->next;
        else return 0;
        slow=slow->next;
        if(fast==slow)return 1;
       }
       return 0;
       
        
    }
};