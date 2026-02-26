#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *link;
}NODE;
NODE *front=NULL,*rear=NULL;
NODE *enQueue(int num){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=num;
    if(front==NULL){
        front=newNode;
        rear=newNode;
        return front;
    }
    rear->link=newNode;
    rear=newNode;
    return front;
}
NODE *deQueue(){
    if(front==NULL){
        printf("Queue is empty\n");
        return NULL;
    }
    NODE *temp=NULL;
    if(front->link==NULL){
        temp=front;
        front=NULL;
        free(temp);
        return NULL;
    }
    temp=front;
    front=front->link;
    free(temp);
    return front;
}
void Status(){
    if(front==NULL){
        printf("Queue is Empty");
        return;
    }
    printf("Front is %d\n",front->data);
    printf("Rear is %d\n",rear->data);

}
int main(){
    int choice;
    while(1){
        printf("\n1:enQueue   2:deQueue  3:Status  4:quit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                front=enQueue(num);
                break;
            case 2:
                front=deQueue();
                break;
            case 3:
                Status();
                break;
            case 4:
                printf("Byee\n");
                exit(0);
                break;
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
}