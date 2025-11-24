#include "header.h"
#include<stdio.h>
// void admin_save(char *filename){
//     FILE *fptr=NULL;
//     fptr=fopen(filename,"w");
//     if(fptr==NULL){
//         printf("File Not Found\n");
//         return;
//     }
//     ADMIN *var=admin_head;
//     fwrite(var,sizeof(ADMIN),1,fptr);
//     fclose(fptr);
//     printf("Admin Data Save Successfully\n");
// }