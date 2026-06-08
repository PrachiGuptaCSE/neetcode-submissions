struct cmp{
    bool operator()(ListNode*a,ListNode*b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
                pq.push(lists[i]);
            }
        }
        ListNode*dummy=new ListNode();
        ListNode *curr=dummy;
        while(!pq.empty()){
            curr->next=pq.top();
            pq.pop();
            curr=curr->next;
            if(curr->next){
                pq.push(curr->next);
            }
        }
    return dummy->next;   
    }
};
