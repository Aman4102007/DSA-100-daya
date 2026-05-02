// Day 24 - Question 2
// Problem: Remove Linked List Elements

struct ListNode* removeElements(struct ListNode* head, int val){struct ListNode dummy={0,head};struct ListNode* cur=&dummy;while(cur->next){if(cur->next->val==val)cur->next=cur->next->next;else cur=cur->next;}return dummy.next;}
