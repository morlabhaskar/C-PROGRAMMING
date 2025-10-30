#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    char ch;
    FILE *src=NULL,*dest=NULL;
    src=fopen(argv[1],"r");
    if(src==NULL){
        printf("File Not Found!\n");
    }
    printf("File Opend Successfully\n");
    dest = fopen(argv[2],"w");

    while((ch=fgetc(src)) != EOF){
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
}
