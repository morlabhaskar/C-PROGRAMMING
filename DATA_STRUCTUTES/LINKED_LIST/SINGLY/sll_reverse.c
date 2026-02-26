//WAP to find last but one node(second last node) in a sll.
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* link;
}NODE;
NODE *head=NULL;
NODE *createNode(int value){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=value;
    return newNode;
}
NODE* insertAtBeg(int value){
    NODE* newNode=createNode(value);
    if(head==NULL){
        return newNode;
    }
    newNode->link=head;
    return newNode;
}
NODE* reverse(){
    if(head==NULL){
        printf("list is empty\n");
        return head;
    }
    NODE *pptr=NULL,*cptr=head,*nptr=NULL;
    while(cptr!=NULL){
        nptr=cptr->link;
        cptr->link=pptr;
        pptr=cptr;
        cptr=nptr;
    }
    head=pptr;
    return head;
}
void displayNodes(){
    NODE* temp=head;
    if(head==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    printf("Linked List is :\n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main(){
    char ch;
    while(1){
        printf("\ni:insert   p:print  d:delete Nth data  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                head=insertAtBeg(num);
                break;
            case 'r':
                head=reverse();
                break;
            case 'p':
                displayNodes();
                break;
            case 'q':
                printf("Byee\n");
                exit(0);
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
}
