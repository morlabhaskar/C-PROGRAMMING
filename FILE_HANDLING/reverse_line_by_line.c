#include<stdio.h>
#include<string.h>
void reverse_string(char *ptr){
    char *left = NULL,*right = NULL,temp;
    left = ptr;
    right = ptr+(strlen(ptr)-2);
    while(left<right){
        if((*left)!=(*right)){
            temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
}
int main(){
    char str[100];
    FILE *fptr = NULL;
    fptr = fopen("dest.txt","r+");
    while(fgets(str,100,fptr)){
        reverse_string(str);
        fseek(fptr,-strlen(str),SEEK_CUR);
        fputs(str,fptr);
    }
    fclose(fptr);
    printf("File updated with reversed lines successfully.\n");
}
