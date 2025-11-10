#include "node.h"
#include<stdio.h>
NODE* createNode(int roll,char *name){
    NODE* new=calloc(1,sizeof(NODE));
    new->roll=roll;
    strcpy(new->name,name);
    return new;
}