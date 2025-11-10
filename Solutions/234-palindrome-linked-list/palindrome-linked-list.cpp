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
    bool isPalindrome(ListNode* head) {
    
    
     ListNode *slow=head;
     ListNode *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
     ListNode *curr=slow;
     ListNode *back=NULL;
     ListNode *front=slow;
        while(curr){
            front=curr->next;
            curr->next=back;
            back=curr;
            curr=front;
        
        }
       while(head && back){
      
        if(head->val !=back->val)return 0;
        head=head->next;
        back=back->next;
       }
       return 1;
    
        
    }
};