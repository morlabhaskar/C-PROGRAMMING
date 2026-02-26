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
int is_prime(int num){
    int cnt=0;
    for(int i=2;i<num;i++){
        if((num%i)==0) cnt++;
    }
    if(cnt==0) return 1;
    return 0;
}
void primeNodes(){
    if(head==NULL){
        printf("list is empty\n");
        return;
    }
    NODE *temp=head;
    int flag=0;
    printf("Prime Numbers are :\n");
    while(temp!=NULL){
        if(is_prime(temp->data)){
            flag=1;
            printf("%d ",temp->data);
        }
        temp=temp->link;
    }
    if(flag==0) printf("No Prime numbers Found\n");
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
            case 'f':
                primeNodes();
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
