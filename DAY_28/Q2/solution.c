// Day 28 - Question 2
// Problem: Palindrome Linked List

bool isPalindrome(ListNode* head){int n=0;for(ListNode* p=head;p;p=p->next)n++;int a[n];int i=0;for(ListNode* p=head;p;p=p->next)a[i++]=p->val;int l=0,r=n-1;while(l<r){if(a[l++]!=a[r--])return false;}return true;}
