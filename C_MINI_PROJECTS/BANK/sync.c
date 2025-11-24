#include "header.h"
#include<stdio.h>
ADMIN *admin_sync(char *filename){
    ADMIN var;
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("File Not Found\n");
        return admin_head;
    }
    if(fread(&var,sizeof(ADMIN),1,fptr)==1){
        admin_head=AdminFetch(var.Admin_count,var.Apassword,var.emp_id,var.name);
    }
    
    fclose(fptr);
    printf("Admin Data Sync Successfully\n");
    return admin_head;
}