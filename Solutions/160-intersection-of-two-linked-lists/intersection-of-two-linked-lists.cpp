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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // unordered_set <ListNode *> st;
        ListNode *temp1=headA,*temp2=headB;
        while(temp1!= temp2){
                   
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==temp2)return temp1;
            // if(temp1->next==NULL && temp2->next==NULL)return NULL;
            if(temp1==NULL){
                temp1=headB;
            }
            if(temp2==NULL){
                temp2=headA;
            }
     


        }
        return temp1;


        // while(temp1){
        //     st.insert(temp1);
        //     temp1=temp1->next;
        // }
        // while(temp2){
        //     auto it=st.find(temp2);
        //     if(it!=st.end())return temp2;
        //     temp2=temp2->next;
        // }
        // return NULL;
        
    }
};