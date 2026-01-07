#include "node.h"
#include<stdio.h>
NODE *sync(char *filename){
    NODE var;
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("file not open\n");
        return head;
    }
    while((fread(&var,size,1,fptr))==1){
        head=insertAtEnd(var.roll,var.name);
    }
    fclose(fptr);
    printf("Data sync from file successfully!\n");
    return head;
}