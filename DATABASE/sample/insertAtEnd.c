#include "node.h"
#include<stdio.h>
NODE* insertAtEnd(int roll,char *name){
    NODE* newNode=createNode(roll,name);
    if(head==NULL){
        return newNode;
    }
    NODE* temp=head;
    while((temp->link)!=NULL){
        temp=temp->link;
    }
    temp->link=newNode;
    return head;
}