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
    ListNode* middleNode(ListNode* head) {
        struct ListNode *slow=head;
        struct ListNode *fast=head;
        // while(slow && fast && fast->next){  
        //     if(fast->next->next==NULL)return slow->next;
        //     if (fast->next==NULL)return slow;
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};