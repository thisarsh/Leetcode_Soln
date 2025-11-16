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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                     
                    slow=slow->next;
                    fast=fast->next;
                  
                }
                return slow;
            }
        }
        return NULL;
        // unordered_set <ListNode*> st;
        // ListNode *temp=head;
        // while(temp){
        //     if(st.find(temp)!=st.end())return temp;
        //     st.insert(temp);
        //     temp=temp->next;
        // }
        // return NULL;
        
    }
};