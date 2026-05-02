// Day 30 - Question 2
// Problem: Add Two Numbers II

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    // reverse helper
    ListNode* rev(ListNode* h){ListNode*p=NULL,q;while(h){q=h->next;h->next=p;p=h;h=q;}return p;}
    l1=rev(l1);l2=rev(l2);
    ListNode* res=NULL;int c=0;while(l1||l2||c){int s=c; if(l1){s+=l1->val;l1=l1->next;} if(l2){s+=l2->val;l2=l2->next;} c=s/10;ListNode* node=(ListNode*)malloc(sizeof(ListNode));node->val=s%10;node->next=res;res=node;}
    return rev(res);
}
