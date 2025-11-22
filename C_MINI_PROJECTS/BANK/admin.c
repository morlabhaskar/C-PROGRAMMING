#include<stdio.h>
#include<string.h>
#include "header.h"
void signUpAdmin(char *filename){
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    ADMIN var;
    if(fread(&var,size,1,fptr)){
        flag=1;
        printf("Already Admin is Available,Please Login Existing Account\n");
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
    admin.Admin_count++;
    fwrite(&admin,sizeof(ADMIN),1,fptr);
    printf("Admin SignUp Successfully!\n");
    flag=1;
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