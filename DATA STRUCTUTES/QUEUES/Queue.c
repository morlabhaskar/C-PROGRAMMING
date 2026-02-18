#include<stdio.h>
#define size 10

int front = -1;
int rear = -1;
int queue[size];

void Enqueue(){
    if(rear == size-1){
        printf("Queue is Full!\n");
    }
    else{
        int data;
        printf("Enter Value : ");
        scanf("%d",&data);
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = data;
        printf("\nEnqueue operation is Success!\n");
    }
}
void Dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is Empty!\n");
    }
    else{
        front++;
        printf("Dequeue operation is Success!\n");

    }
}
void Peek(){
    if(front == -1 || front > rear)
        printf("Queue is Empty!\n");
    else{
        printf("Peek Value is :%d\n",queue[front]);
    }
}
void Display(){
    if(front == -1 || front > rear){
        printf("Queue is Empty!\n");
    }
    else{
        printf("[");
        for(int i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
        printf("]");
        printf("\n");
    }
}
int main(){
    int option;
    
    while(1){
        printf("\nChoose Options : 1)Enqueue 2)Dequeue 3)Peek  4)Display  5)Exit\nEnter option :\n");
        scanf("%d",&option);

        if(option == 1){
            Enqueue();
        }
        else if(option == 2){
            Dequeue();
        }
        else if(option == 3){
            Peek();
        }
        else if(option == 4){
            Display();
        }
        else{
            break;
        }
    }
    return 0;
}