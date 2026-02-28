//WAP to find Middle Node in sll.
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
void findMid(){
    if(head==NULL){
        printf("list is empty\n");
        return;
    }
    if(head->link==NULL){
        printf("Middle Node is %d\n",head->data);
        return;
    }
    NODE *fast=head,*slow=head;
    //check for only 2 nodes present
    if((fast->link->link)==NULL){
        printf("Middle Nodes are %d & %d\n",fast->data,fast->link->data);
        return;
    }
    while(((fast->link)!=NULL)&&((fast->link->link)!=NULL)){
        fast=fast->link->link;
        slow=slow->link;
    }
    if((fast->link)!=NULL){
        printf("Middle Nodes are %d & %d\n",slow->data,slow->link->data);
        return;
    }
    else{
        printf("Middle Node is %d\n",slow->data);
    }
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
void freeup(){
    if(head==NULL){
        return;
    }
    if(head->link==NULL){
        free(head);
        return;
    }
    NODE *temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
        free(head);
        head=temp;
    }
    free(head);
    printf("Free Success\n");
}
int main(){
    char ch;
    while(1){
        printf("\ni:insert   p:print  m:find middle  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                head=insertAtBeg(num);
                break;
            case 'm':
                findMid();
                break;
            case 'p':
                displayNodes();
                break;
            case 'q':
                freeup();
                printf("Byee\n");
                exit(0);
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
}
