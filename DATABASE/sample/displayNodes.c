#include "node.h"
#include<stdio.h>
void displayNodes(){
    NODE* temp=head;
    if(head==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    printf("Linked List is :\n");
    while(temp!=NULL){
        printf("%d  %s\n",temp->roll,temp->name);
        temp=temp->link;
    }
}