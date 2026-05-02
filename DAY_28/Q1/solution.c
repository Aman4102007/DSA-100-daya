// Day 28 - Question 1
// Problem: Circular Linked List Creation and Traversal

#include <stdio.h>

struct Node{int data;struct Node* next;};

int main(){
    int n,i;scanf("%d",&n);
    struct Node nodes[100];
    for(i=0;i<n;i++){
        scanf("%d",&nodes[i].data);
        nodes[i].next=NULL;
    }
    for(i=0;i<n-1;i++) nodes[i].next=&nodes[i+1];
    if(n>0) nodes[n-1].next=&nodes[0];
    struct Node* head=(n>0)?&nodes[0]:NULL;
    struct Node* cur=head;
    if(head){
        do{printf("%d",cur->data);cur=cur->next;}
        while(cur!=head && cur!=NULL);
    }
    return 0;
}
