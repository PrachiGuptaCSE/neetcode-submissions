class Solution {
public:
ListNode* findmiddle(ListNode*head){
        //  FIND THE MIDDLE OF THE LL
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
    return slow;
}
ListNode* reverse(ListNode*slow){
    //REVERSE THR 2ND HALF
    ListNode *prev=NULL;
    ListNode *curr=slow;
    ListNode *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void reorderList (ListNode* head){   
    ListNode *slow=findmiddle(head);
    ListNode *second=slow->next;
    slow->next=NULL;
    second=reverse(second);
    //MERGING THE TWO HALVES
    while(head != NULL && second != NULL){
        ListNode *nextfirst=head->next;
        ListNode *nextsecond=second->next;
        head->next=second;
        second->next=nextfirst;
        head=nextfirst;
        second=nextsecond;
    }

    
    }
};
