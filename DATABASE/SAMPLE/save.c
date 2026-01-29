#include "node.h"
#include<stdio.h>
void save(char *filename){
    FILE *fptr=NULL;
    if(head==NULL){
        printf("Data is Empty\n");
        return;
    }
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("file not open\n");
        return;
    }
    NODE *temp=head;
    while(temp!=NULL){
        fwrite(temp,size,1,fptr);
        temp=temp->link;
    }
    fclose(fptr);
    printf("Data saved to file successfully!\n");
}