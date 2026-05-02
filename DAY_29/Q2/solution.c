// Day 29 - Question 2
// Problem: Add Two Numbers

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode dummy={0,NULL};
    ListNode *p=&dummy,*cur;
    int carry=0;
    while(l1||l2||carry){
        int sum=carry;
        if(l1){sum+=l1->val; l1=l1->next;}
        if(l2){sum+=l2->val; l2=l2->next;}
        carry=sum/10;
        cur=(ListNode*)malloc(sizeof(ListNode));
        cur->val=sum%10; cur->next=NULL;
        p->next=cur; p=cur;
    }
    return dummy.next;
}