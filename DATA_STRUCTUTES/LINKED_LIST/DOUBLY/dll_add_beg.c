#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}NODE;
NODE *head=NULL;
NODE *createNode(int val){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=val;
    return newNode;
}
NODE *insertAtBeg(int val){
    NODE *newNode=createNode(val);
    if(head==NULL){
        head=newNode;
        return head;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return head;
}
void displayNodes(){
    if(head==NULL){
        printf("List is Empty");
        return;
    }
    NODE *temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
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