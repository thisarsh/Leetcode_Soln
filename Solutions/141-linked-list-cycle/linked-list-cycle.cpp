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
     struct ListNode *temp=head;
     struct ListNode *t=NULL;
     while(temp!=NULL){
        if(temp->val==INT_MAX)return 1;
        temp->val=INT_MAX;
        temp=temp->next;
     }
     return 0;

    }
};