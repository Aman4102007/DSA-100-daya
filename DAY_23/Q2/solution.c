// Day 23 - Question 2
// Problem: List Cycle Detection

bool hasCycle(ListNode *head){
    ListNode *f=head,*s=head;
    while(f&&f->next){
        f=f->next->next;
        s=s->next;
        if(f==s)return true;
    }
    return false;
}