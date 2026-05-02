// Day 22 - Question 2
// Problem: Reverse Linked List

ListNode* reverseList(ListNode* head){ListNode* prev=NULL,*cur=head,*nxt;while(cur){nxt=cur->next;cur->next=prev;prev=cur;cur=nxt;}return prev;}
