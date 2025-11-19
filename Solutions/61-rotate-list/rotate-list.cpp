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
         ListNode *temp=head;
         ListNode *fast=head;
         ListNode *slow=head;
         ListNode *newhead=head;
         int len=1;
        while(temp->next){
            temp=temp->next;
            len++;
        }
        if(k>len)k=k%len;
        
        if(k==0 || k%len==0)return head;

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