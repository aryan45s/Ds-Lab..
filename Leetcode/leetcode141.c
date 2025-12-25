
bool hasCycle(struct ListNode *head) {
    ListNode*fast=head;
   ListNode* slow=head;
   if(!head){
    return false;
   }
while (fast && fast->next) 
{
    fast=fast->next->next;
    slow=slow->next;
    if(slow==fast){
        return true;
    }
    
}
return false;}
