#include<stdio.h>
#include<string.h>
char *my_strstr(char *ptr,char *sub){
    int flag;
    for(int i=0;ptr[i];i++){
        if(ptr[i]==(*sub)){
            flag=1;
            for(int j=1;sub[j];j++){
                if(sub[j] != ptr[i+j]){
                    flag=0;
                    break;
                }
            }
            if(flag) return ptr+i;
        }
    }
    return NULL;
}
int lowercase(char ch){
    if(ch>=97 && ch<=122) return 1;
    return 0;
}
void change_substring_case(char *ptr,char *sub){
    char *p=ptr;
    for(int i=0;i<strlen(sub);i++){
        if(lowercase(*p)) *p=*p-32;
        else *p=*p+32;
        *p++;
    }
    // printf("%s\n",ptr);
}
int main(){
    char str[100],sub[50],*ptr=NULL;
    int flag=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    printf("Enter SubString :\n");
    fgets(sub,sizeof(sub),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    if(sub[strlen(sub)-1] == '\n'){
        sub[strlen(sub)-1] = '\0';
    }
    ptr=str;
    while((ptr=my_strstr(ptr,sub))!=NULL){
        flag=1;
        change_substring_case(ptr,sub);
        ptr=ptr+strlen(sub);
    }
    if(flag) printf("%s\n",str);
    else printf("sub string not found");
}
