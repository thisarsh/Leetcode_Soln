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
       int len=0;
       while(fast!=NULL){
        len++;
        if(len>1 && fast==slow)return 1;

        if(fast->next!=NULL && fast->next->next!=NULL)fast=fast->next->next;
        else return 0;
        slow=slow->next;

       }
       return 0;
       
        
    }
};