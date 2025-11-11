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
    ListNode* deleteMiddle(ListNode* head) {
                if(head==NULL|| head->next==NULL)return NULL;

        struct ListNode *fast=head;
        struct ListNode *slow=head;
        struct ListNode *prev=NULL;

        while(fast && fast->next){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;

        }

       prev->next=prev->next->next;
      
        return head;


    //     int len=0;
    //     struct ListNode *temp=head;
    //     struct ListNode *nn=NULL;
    //     while(temp!=NULL){
    //         temp=temp->next;
    //         len++;
    //     }
    
    // len/=2;
    // len--;
    // if(len==-1)return NULL;
    // temp=head;
    
    // while(len--){
    //    temp=temp->next;
    // }
    // if( temp->next!=NULL)temp->next=temp->next->next;
    // return head;
    }
};