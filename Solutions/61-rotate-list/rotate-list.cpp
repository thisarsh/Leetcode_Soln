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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)return head;
      
         ListNode *dummy=new ListNode (-1);
         dummy->next=head;
         ListNode *temp=dummy->next;
         int len=1;
         
         ListNode *slow=dummy;
         ListNode *fast=dummy;
         ListNode *newhead=NULL;
        //  ListNode *fast=dummy;
       
        while(temp->next){
            temp=temp->next;
            len++;
        }
        if(k%len==0)return head;

        if(k>len)k=k%len;

        while(k--){
            fast=fast->next;
        }
        while(fast->next){
            fast=fast->next;
            slow=slow->next;

        }
        newhead=slow->next;
        slow->next=NULL;
        temp->next=head;
       


        return newhead;
    }
};