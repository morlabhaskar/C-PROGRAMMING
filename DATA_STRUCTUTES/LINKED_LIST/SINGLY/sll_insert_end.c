//WAP to insert Node at Last in sll.
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* link;
}NODE;
NODE* head=NULL;
NODE* createNode(int val){
    NODE* new=calloc(1,sizeof(NODE));
    new->data=val;
    return new;
}
NODE* insertAtEnd(int value){
    NODE* newNode=createNode(value);
    if(head==NULL){
        return newNode;
    }
    NODE* temp=head;
    while((temp->link)!=NULL){
        temp=temp->link;
    }
    temp->link=newNode;
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
        printf("\ni:insert   p:print  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                head=insertAtEnd(num);
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