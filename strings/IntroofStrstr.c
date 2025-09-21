//char *strstr(const char *haystack, const char *needle);
//The strstr() function finds the first occurrence of the substring in the string , returns the found at substring in main string substring base address is return,otherwise return NULL. 

#include<stdio.h>
#include<string.h>
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
    ptr = strstr(ptr,sub);
    printf("%s\n",str);
    if(ptr==NULL){
        printf("SubString Not Found");
    }
    else{
        printf("SubString Found at Index : %d\n",ptr-str);
    } 
}