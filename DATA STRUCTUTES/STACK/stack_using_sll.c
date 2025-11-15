#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *link;
}NODE;
int top=-1;
NODE *head=NULL;
NODE *push(int num){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=num;
    top++;
    if(head==NULL){
        head=newNode;
        return head;
    }
    newNode->link=head;
    head=newNode;
    return head;
}
void pop(){
    if(top==-1){
        printf("Stack is empty\n");
        return;
    }
    NODE *temp=head;
    if(temp->link==NULL){
        printf("Pop data is %d\n",temp->data);
        free(temp);
        top--;
        printf("Stack is Empty\n");
        return;
    }
    temp=head;
    top--;
    head=head->link;
    printf("Pop data is %d\n",temp->data);
    free(temp);
}
void peek(){
    if(top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Top Value in Stack is %d\n",head->data);
    }
}
int main(){
    int choice;
    while(1){
        printf("\n1:push   2:pop  3:peek  4:quit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                head=push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("Byee\n");
                exit(0);
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
}