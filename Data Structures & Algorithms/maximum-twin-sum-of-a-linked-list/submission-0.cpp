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
        //find the middle point
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse the second half
        ListNode*prev=NULL;
        ListNode*curr=slow;
        ListNode*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
       //twin sum
       int ans=0;
       ListNode* i=head;
       ListNode* j=prev;
       while(j!=NULL){
            int twinsum=i->val+j->val;
            ans=max(ans,twinsum);   
            i=i->next;
            j=j->next;
       }
    return ans;    
    }
};