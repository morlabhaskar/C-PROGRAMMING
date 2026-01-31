//WAP to Sort All Words In a Given String.
#include<stdio.h>
#include<string.h>
void sort_a_word(char *ptr){
    for(int i=strlen(ptr)-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(ptr[j]>ptr[i]) ptr[j] ^= ptr[i] ^= ptr[j] ^= ptr[i];
        }
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
    ptr = str;
    ptr = strtok(ptr," ");
    while (ptr != NULL){
        sort_a_word(ptr);
        ptr = strtok(NULL," ");
    }
    replace_null_with_space(str,len);
    printf("%s\n",str);
}