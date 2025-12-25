
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *tem=head;
        struct ListNode *ptr=NULL;
        struct ListNode *prev=NULL;
        struct ListNode *current=head;
        while(current!=NULL){
        
        ptr=current->next;
        current->next=prev;
        prev=current;
        current=ptr;
}
return prev;}
