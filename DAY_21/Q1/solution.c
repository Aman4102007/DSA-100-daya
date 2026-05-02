// Day 21 - Question 1
// Problem: Create and Traverse Singly Linked List

#include <stdio.h>

struct Node{int data; struct Node* next;};

int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0;
    struct Node nodes[100]; // enough for n<=100
    struct Node* head=NULL, *tail=NULL;
    for(i=0;i<n;i++){
        int val; scanf("%d",&val);
        nodes[i].data=val; nodes[i].next=NULL;
        if(head==NULL){head=tail=&nodes[i];}
        else{tail->next=&nodes[i]; tail=&nodes[i];}
    }
    // traverse and print
    struct Node* cur=head;
    while(cur){
        printf("%d",cur->data);
        if(cur->next) printf(" ");
        cur=cur->next;
    }
    return 0;
}
