#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top = -1;
void push(){
    if(top == size-1)
        printf("Stack is Full!\n");
    else{
        int val;
        printf("Enter Value :\n");
        scanf("%d",&val);
        top++;
        stack[top] = val;
        printf("Push Operation is Success\n");
    }
}
void pop(){
    if(top == -1)
        printf("Stack is Empty!\n");
    else{
        top--;
        printf("Pop Operation is Success\n");
    }
}
void peek(){
    if(top == -1)
        printf("Stack is Empty!\n");
    else{
        printf("Peek Value is :%d\n",stack[top]);
    }
}
void display(){
    if(top == -1)
        printf("Stack is Empty!\n");
    else{
        printf("[");
        for(int i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
        printf("]");
    }
}
int main(){
    printf("Stack Implimentation Using Array :\n");
    while(1){
        int option;
        printf("\nOptions : 1)push 2)pop 3)peek  4)display  5)exit\nEnter option :\n");
        scanf("%d",&option);
        if(option == 1)
            push();
        else if(option == 2)  
            pop();
        else if(option == 3)
            peek();
        else if(option == 4)
            display();
        else
            break;
    }
}
