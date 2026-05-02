// Day 25 - Question 2
// Problem: Linked List Cycle II

struct ListNode{int val;struct ListNode*next;};
struct ListNode* detectCycle(struct ListNode* h){struct ListNode*i=h,j=h;while(i&&i->next){i=i->next->next;j=j->next; if(i==j)break;}if(!i||!i->next)return NULL;j=h;while(i!=j){i=i->next;j=j->next;}return i;}
