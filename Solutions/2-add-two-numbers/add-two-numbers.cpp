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
    // ListNode *newnode(ListNode *head,int data){
    //     ListNode *nn=new ListNode(data,NULL);
    //     if(head==NULL)return nn;
    //     ListNode *temp=head;
    //     while(temp->next){
    //    temp=temp->next;
    //     } temp->next=nn;

    //     return head;
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *up=l1;
        ListNode *down=l2;
        ListNode *ans=new ListNode (0);
        ListNode *anshead= ans;
        int carry=0;
        while(up || down || carry>0){
            int curr=carry;
            if(up){
             curr+=up->val;
             up=up->next;
            }
            if(down){
                curr+=down->val;
                down=down->next;

            }
            ans->next=new ListNode (curr%10);
            ans=ans->next;
            carry=curr/10;
            
            
        }
       

return anshead->next;



    //     ListNode *ans= NULL;
    //     ListNode *anshead= NULL;

    //     ListNode *up=l1,*down=l2;
    //     int carry=0;
    //     while(up && down){
    //         int curr=up->val+down->val+carry;
    //         ans=newnode(ans,curr%10);
    //         if(anshead==NULL){
    //             anshead=ans;
    //         }
    //         carry=curr/10;
    //         up=up->next;
    //         down=down->next;
    //     }
    //     while(up){
    //         int curr=up->val+carry;
    //         ans=newnode(ans,curr%10);
    //         carry=curr/10;
    //         up=up->next;
           
    //     }
    //     while(down){
    //         int curr=down->val+carry;
    //         ans=newnode(ans,curr%10);
    //         carry=curr/10;
    //         down=down->next;
    //     }
    //     if(carry>0){
    //         ans=newnode(ans,carry);
    //     }
       
    //    return anshead;
        
    }
};