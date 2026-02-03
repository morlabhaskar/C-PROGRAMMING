//WAP to Reverse and Hide The Alternate Occurance Words In a Given String.
#include<stdio.h>
#include<string.h>
void reverse_word(char *ptr){
    char *left = ptr,*right = ptr+strlen(ptr)-1;
    while(left<right){
        if(*left!=*right){
            *left ^= *right ^= *left ^= *right;
        }
        left++;
        right--;
    }
}
void hide_word(char *ptr){
    memset(ptr,'*',strlen(ptr));
}
void replace_null_with_space(char *ptr,int len){
    for(int i=0;i<len;i++) if(ptr[i] == '\0') ptr[i] = ' ';
}
int main(){
    char str[100],*ptr=NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    int count = 0,len = strlen(str);
    ptr = str;
    ptr = strtok(ptr," ");
    while (ptr != NULL){
        if(count%2 == 0){
            reverse_word(ptr);
        }
        else{
            hide_word(ptr);
        }
        count++;
        ptr = strtok(NULL," ");
    }
    replace_null_with_space(str,len);
    printf("%s\n",str);
}