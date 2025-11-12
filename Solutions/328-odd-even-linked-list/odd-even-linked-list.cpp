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
    ListNode* oddEvenList(ListNode* head) {
        vector <int> ste;
        vector <int> sto;
        ListNode *temp=head;
        int lene=0,len=0;
        while(temp){
            len++;
            if(len%2==0)ste.push_back(temp->val);
            else sto.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(auto it:sto){
            temp->val=it;
            temp=temp->next;
            
        }
        for(auto it:ste){
            temp->val=it;
            temp=temp->next;
            
        }
        return head;
    }
};