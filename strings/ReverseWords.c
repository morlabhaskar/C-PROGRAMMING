//WAP to Reverse Words In a Given String.
#include<stdio.h>
#include<string.h>
void reverse_string(char *ptr){
    char *left = ptr,*right = ptr+strlen(ptr)-1;
    while(left<right){
        *left ^= *right ^= *left ^= *right;
        left++;
        right--;
    }
}
void reverse_word(char *ptr){
    char *left = ptr,*right = ptr+strlen(ptr)-1;
    while(left<right){
        *left ^= *right ^= *left ^= *right;
        left++;
        right--;
    }
}
void replace_null_with_space(char *ptr,int len){
    for(int i=0;i<len;i++) if(ptr[i] == '\0') ptr[i] = ' ';
}
int main(){
    char str[100],*ptr=NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    int len = strlen(str);
    reverse_string(str);
    ptr = str;
    ptr = strtok(ptr," ");
    while (ptr != NULL){
        reverse_word(ptr);
        ptr = strtok(NULL," ");
    }
    replace_null_with_space(str,len);
    printf("%s\n",str);
    
}