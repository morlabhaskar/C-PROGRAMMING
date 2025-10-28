#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    FILE *src=NULL;
    FILE *dest=NULL;
    src = fopen("source.txt","r");
    if(src==NULL){
        printf("No File Found\n");
        exit(0);
    }
    printf("Source File Opend Successfully\n");
    dest = fopen("dest.txt","w");
    if(dest==NULL){
        printf("No File Found\n");
        exit(0);
    }
    printf("Dest File Opend Successfully\n");
    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
}