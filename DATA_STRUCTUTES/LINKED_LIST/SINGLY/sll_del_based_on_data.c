//WAP to delete Nth Node based on the data in sll.
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
NODE *deleteData(){
    if(head==NULL){
        printf("list is empty\n");
        return head;
    }
    int num,flag=0;
    printf("Enter data to delete\n");
    scanf("%d",&num);
    if((head->data)==num){
        NODE *del=head;
        head=head->link;
        free(del);
        return head;
    }
    NODE *temp=head;
    while(temp->link!=NULL){
        if((temp->link->data)==num){
            flag=1;
            break;
        }
        temp=temp->link;
    }
    if(flag==0){
        printf("Your data is not found\n");
        return head;
    }
    NODE *del=temp->link;
    temp->link=del->link;
    free(del);
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
            case 'd':
                head=deleteData();
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
