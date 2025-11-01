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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_set <int> st(nums.begin(),nums.end());
       struct ListNode *temp=head;
       struct ListNode *prev=NULL;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        prev=dummy;


       while(temp!=NULL){
        auto it = st.find(temp->val);
        if (it==st.end())
        {
            prev=temp;
        }
        else
        {
            prev->next=temp->next;
     
        }
          temp=temp->next;
       }

       return dummy->next;
        
    }
};