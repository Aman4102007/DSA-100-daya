// Day 27 - Question 2
// Problem: Remove Cycle in Linked List

void removeLoop(struct Node *head){struct Node *slow=head, *fast=head;while(fast&&fast->next){slow=slow->next;fast=fast->next->next;if(slow==fast){break;}}if(!fast||!fast->next)return;slow=head;while(slow->next!=fast->next){slow=slow->next;fast=fast->next;}fast->next=NULL;}
