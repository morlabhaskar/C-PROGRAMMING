//char *strstr(const char *haystack, const char *needle);
//The strstr() function finds the first occurrence of the substring in the string , returns the found at substring in main string substring base address is return,otherwise return NULL. 
#include<stdio.h>
#include<string.h>

char *my_strstr(char *ptr,char *sub){
    int flag,i,j;
    for(i=0;ptr[i]!='\0';i++){
        if(ptr[i] == (*sub)){
            flag=1;
            for(j=1;sub[j]!='\0';j++){
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


int main(){
    char str[30],sub[10];
    char *ptr = NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    printf("Enter a SubString :\n");
    fgets(sub,sizeof(sub),stdin);
    

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    if(sub[strlen(sub)-1] == '\n'){
        sub[strlen(sub)-1] = '\0';
    }
    ptr=str;
    // ptr = strstr(ptr,sub);
    printf("%s\n",str);
    // while((ptr = strstr(ptr,sub))!=NULL){
    while((ptr = my_strstr(ptr,sub))!=NULL){
        printf("SubString Found at Index : %d\n",ptr-str);
        ptr = ptr + strlen(sub);
    }
    // if(ptr==NULL){
    //     printf("SubString Not Found");
    // }
    // else{
    //     printf("SubString Found at Index : %d\n",ptr-str);
    // }
}