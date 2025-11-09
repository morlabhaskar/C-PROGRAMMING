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
NODE* insertAtBeg(int value){
    NODE* newNode=createNode(value);
    if(head==NULL){
        return newNode;
    }
    newNode->link=head;
    return newNode;
}
NODE *deleteEnd(){
    if(head==NULL){
        printf("No List is available");
        return head;
    }
    if((head->link)==NULL){
        free(head);
        head=NULL;
        return head;
    }
    NODE *temp = head;
    while((temp->link->link)!=NULL){
        temp=temp->link;
    }
    NODE *del=temp->link;
    temp->link=NULL;
    free(del);
    free(temp);
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
        printf("\ni:insert   p:print  d:delete  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                head=insertAtBeg(num);
                break;
            case 'd':
                head=deleteEnd();
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