#include<stdio.h>
#include<stdlib.h>
#include "header.h"
#include<string.h>

ACCOUNT *createNode(int acc_no,char *password,char *name,float bal,char *phn){
    ACCOUNT *new=calloc(1,sizeof(ACCOUNT));
    new->acc_num=acc_no;
    strcpy(new->name,name);
    strcpy(new->Upassword,password);
    new->balance=bal;
    strcpy(new->phone,phn);
    return new;

}