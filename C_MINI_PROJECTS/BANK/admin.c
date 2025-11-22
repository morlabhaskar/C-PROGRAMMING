#include<stdio.h>
#include<string.h>
#include "header.h"
void signUpAdmin(char *filename){
    int emp_id;
    char apass[20];
    printf("Enter Emp_id :\n");
    scanf("%d",&emp_id);
    printf("Enter Password :\n");
    getchar();
    fgets(apass,sizeof(apass),stdin);
    if(apass[strlen(apass)-1]=='\n') apass[strlen(apass)-1]='\0';
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    ACCOUNT var;
    if(fread(&var,size,1,fptr)){
        flag=1;
    }
}
void loginAdmin(){
    int emp_id;
    char apass[20];
    printf("Enter Emp_id :\n");
    scanf("%d",&emp_id);
    printf("Enter Password :\n");
    getchar();
    fgets(apass,sizeof(apass),stdin);
    if(apass[strlen(apass)-1]=='\n') apass[strlen(apass)-1]='\0';

}