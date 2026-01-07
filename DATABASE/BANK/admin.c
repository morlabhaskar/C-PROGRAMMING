#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"

ADMIN *createAdminNode(int emp_id,char *name,char *Apassword,int Admin_count){
    ADMIN *new=calloc(1,sizeof(ADMIN));
    new->emp_id=emp_id;
    strcpy(new->name,name);
    strcpy(new->Apassword,Apassword);
    new->Admin_count=Admin_count;
    return new;
}
ADMIN *AdminFetch(int admin_count,char *aPass,int emp_id,char *name){
    ADMIN *newNode=createAdminNode(emp_id,name,aPass,admin_count);
    return newNode;
}

void signUpAdmin(char *filename){
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    ADMIN var;
    if(fread(&var,sizeof(ADMIN),1,fptr)==1){
        
        printf("Already Admin is Available,Please Login Existing Account\n");
        flag=1;
        fclose(fptr);
        return;
    }
    fclose(fptr);
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("File is Not opened\n");
        exit(0);
    }
    ADMIN admin;
    printf("Enter Emp_id :\n");
    scanf("%d",&admin.emp_id);
    printf("Enter Password :\n");
    getchar();
    fgets(admin.Apassword,sizeof(admin.Apassword),stdin);
    if(admin.Apassword[strlen(admin.Apassword)-1]=='\n') admin.Apassword[strlen(admin.Apassword)-1]='\0';
    printf("Enter Name :\n");
    getchar();
    fgets(admin.name,sizeof(admin.name),stdin);
    if(admin.name[strlen(admin.name)-1]=='\n') admin.name[strlen(admin.name)-1]='\0';
    admin.Admin_count=1;
    fwrite(&admin,sizeof(ADMIN),1,fptr);
    fclose(fptr);
    flag=1;
    printf("Admin SignUp Successfully!\n");
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