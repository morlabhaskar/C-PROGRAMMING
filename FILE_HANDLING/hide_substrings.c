
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//<./a.exe>  <filename>  <substring>
int main(int argc,char *argv[]){
    if(argc != 3){
        printf("Invalid Command Line Arguments\n");
        printf("<./a.out>  <filename>   <substring>\n");
        exit(0);
    }
    char str[100],*ptr=NULL;
    FILE *fptr=NULL;
    fptr = fopen(argv[1],"r+");
    while(fgets(str,sizeof(str),fptr)){
        ptr = str;
        while((ptr=strstr(ptr,argv[2]))!=NULL){
            memset(ptr,'*',strlen(argv[2]));
            ptr = ptr+strlen(argv[2]);
        }
        fseek(fptr,-strlen(argv[2]),SEEK_CUR);
        fputs(str,fptr);
    }
    fclose(fptr);
}
