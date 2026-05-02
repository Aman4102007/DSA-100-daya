// Day 93 - Question 2
// Problem: Insertion Sort List

struct ListNode* insertionSortList(struct ListNode* head){struct ListNode dummy={0,head};struct ListNode* cur=head;while(cur){struct ListNode* next=cur->next;struct ListNode* prev=&dummy;while(prev->next&&prev->next->val<cur->val)prev=prev->next;cur->next=prev->next;prev->next=cur;cur=next;}return dummy.next;}
