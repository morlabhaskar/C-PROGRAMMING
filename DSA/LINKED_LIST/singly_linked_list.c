#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
struct Node* createNode(int value){
    struct Node* newNode=calloc(1,sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
void insertAtBeginning(int value){
    struct Node* newNode=createNode(value);
    newNode->next=head;
    head=newNode;
    printf("Node Inserted Successfully\n");
}
void displayNodes(){
    struct Node* temp=head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int num;
    insertAtBeginning(20);
    insertAtBeginning(10);
    displayNodes();
}