// Day 26 - Question 2
// Problem: Design Linked List

#include <stdlib.h>

struct ListNode{int val; struct ListNode* next;};
struct MyLinkedList{struct ListNode* head; int sz;};

struct MyLinkedList* MyLinkedListCreate(){struct MyLinkedList* l=malloc(sizeof(*l));l->head=NULL;l->sz=0;return l;}

int MyLinkedListGet(struct MyLinkedList* obj,int index){if(index<0||index>=obj->sz)return -1;struct ListNode* p=obj->head;for(int i=0;i<index;i++)p=p->next;return p->val;}

void MyLinkedListAddAtHead(struct MyLinkedList* obj,int val){struct ListNode* n=malloc(sizeof(*n));n->val=val;n->next=obj->head;obj->head=n;obj->sz++;}

void MyLinkedListAddAtTail(struct MyLinkedList* obj,int val){struct ListNode* n=malloc(sizeof(*n));n->val=val;n->next=NULL;if(!obj->head){obj->head=n;}else{struct ListNode* p=obj->head;while(p->next)p=p->next;p->next=n;}obj->sz++;}

void MyLinkedListAddAtIndex(struct MyLinkedList* obj,int index,int val){if(index<0||index>obj->sz)return;if(index==0){MyLinkedListAddAtHead(obj,val);return;}struct ListNode* p=obj->head;for(int i=0;i<index-1;i++)p=p->next;struct ListNode* n=malloc(sizeof(*n));n->val=val;n->next=p->next;p->next=n;obj->sz++;}

void MyLinkedListDeleteAtIndex(struct MyLinkedList* obj,int index){if(index<0||index>=obj->sz||!obj->head)return;struct ListNode* todel; if(index==0){todel=obj->head;obj->head=obj->head->next;}else{struct ListNode* p=obj->head;for(int i=0;i<index-1;i++)p=p->next; todel=p->next;p->next=todel->next;}free(todel);obj->sz--;}
