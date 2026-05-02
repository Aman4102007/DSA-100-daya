// Day 21 - Question 2
// Problem: Middle of the Linked List

struct ListNode* middleNode(struct ListNode* head){struct ListNode*i=head;struct ListNode*j=head;while(j&&j->next){i=i->next;j=j->next->next;}return i;}
