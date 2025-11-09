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
NODE *deleteKthNode(){
    int num;
    printf("Enter Kth Node for delete :\n");
    scanf("%d",&num);
    if(head==NULL){
        printf("List is empty not possible to delete node\n");
        return NULL;
    }
    NODE *temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->link;
    }
    if(len<num){
        printf("outoff range to delete not possible");
        return head;
    }
    if(num==1){
        temp=head;
        head=head->link;
        free(temp);
        return head;
    }
    temp=head;
    for(int i=1;i<num-1;i++){
        temp=temp->link;
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
                head=insertAtBeg(num);
                break;
            case 'd':
                head=deleteKthNode();
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