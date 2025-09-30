//WAP to Reverse Each Word In a Given String.
#include<stdio.h>
#include<string.h>
void reverse_word(char *p){
    char *left=p,*right=p+strlen(p)-1;
    while(left<right){
        // char temp = *left;
        // *left = *right;
        // *right = temp;
        *left ^= *right ^= *left ^= *right;
        left++;
        right--;
    }
}
void replace_null_with_space(char *ptr,int len){
    for(int i=0;i<len;i++){
        if(ptr[i]=='\0'){
            ptr[i]=' ';
        }
    }
}
int main(){
    char str[100],*ptr=NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    int len = strlen(str);
    ptr = str;
    ptr = strtok(ptr," ");
    while(ptr != NULL){
        reverse_word(ptr);
        ptr = strtok(NULL," ");
    }
    printf("After Reversing :\n");
    replace_null_with_space(str,len);
    // for(int i=0;str[i];i++){
    //     printf("str[%d]=%c\n",i,str[i]);
    // }
    printf("%s\n",str);
}