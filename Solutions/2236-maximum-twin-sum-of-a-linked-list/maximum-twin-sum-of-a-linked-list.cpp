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
    int pairSum(ListNode* head) {
        ListNode *n=head;
        int sum=0;
        vector <int> nums;
        while(n){
            nums.push_back(n->val);
            n=n->next;
        }
        int k=nums.size();
        for(int i=0; i<k/2;i++){
            sum=max(sum,nums[i]+nums[k-i-1]);

        }
        return sum;
        


        
    }
};