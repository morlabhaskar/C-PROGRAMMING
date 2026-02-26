#include<stdlib.h>
#include<stdio.h>
typedef struct Node{
    int data;
    struct Node *link;
}NODE;
NODE *createNode(int val){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=val;
    return newNode;
}
NODE *delKthNodes(NODE *ptr,int k){
    if(ptr==NULL) return ptr;
    int cnt=1;
    NODE *temp=ptr;
    while((temp!=NULL)&&(temp->link!=NULL)){
        if((cnt+1)==k){
            NODE *del=temp->link;
            temp->link=del->link;
            free(del);
            cnt=0;
        }
        cnt++;
        temp=temp->link;
    }
    return ptr;
}
void printList(NODE *ptr){
    if(ptr==NULL){
        printf("List is Empty!");
        return;
    }
    NODE *temp=ptr;
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->link!=NULL) printf("->");
        temp=temp->link;
    }
}
int main(){
    NODE *head=NULL;
    head=createNode(10);
    head->link=createNode(20);
    head->link->link=createNode(30);
    head->link->link->link=createNode(40);
    head->link->link->link->link=createNode(50);
    head->link->link->link->link->link=createNode(60);
    // head->link->link->link->link->link->link=createNode(70);
    head=delKthNodes(head,3);
    printList(head);
}