#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    FILE *fptr;
    fptr = fopen("source.txt","r");
    if(fptr==NULL){
        printf("No File Found\n");
        exit(0);
    }
    printf("File Opend Successfully\n");
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);
}