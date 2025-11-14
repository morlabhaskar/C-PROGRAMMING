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
NODE *sumBetZeros(NODE *head){
    if(head==NULL) return head;
    if(head->data==0){
        NODE *temp=head;
        head=head->link;
        free(temp);
    }
    int sum=0,cnt=1;
    NODE *prev=head;
    while(prev!=NULL){
        NODE *temp=prev;
        while(temp->data!=0){
                sum+=temp->data;
                temp=temp->link;
                free(prev);
                prev=temp;
        }
        temp=NULL;
        if(prev->data==0){
                head->link=prev;
                prev->data=sum;
                if(cnt==1) head=prev;
                sum=0;
        }
        cnt++;
        prev=prev->link;
    }
    return head;
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
    head=createNode(0);
    head->link=createNode(1);
    head->link->link=createNode(0);
    head->link->link->link=createNode(3);
    head->link->link->link->link=createNode(0);
    head->link->link->link->link->link=createNode(2);
    head->link->link->link->link->link->link=createNode(2);
    head->link->link->link->link->link->link->link=createNode(0);
    head=sumBetZeros(head);
    printList(head);
}

