//WAP to sort last Occurance SubStrings in a given String
#include<stdio.h>
#include<string.h>
void sort_substring(char *sort){
    for(int i=strlen(sort)-1;i>=0;i--){
        char temp;
        for(int j=0;j<i;j++){
            if(sort[j]>sort[j+1]){
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }
}
int main(){
    char str[100],sub[30],sort[30],*ptr=NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);//hdnanighnanikdnanirfnanijkdnani
    printf("Enter Sub-String :\n");
    fgets(sub,sizeof(sub),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    if(sub[strlen(sub)-1] == '\n'){
        sub[strlen(sub)-1] = '\0';
    }
    strcpy(sort,sub);//sub copy to sort
    ptr = str;
    char *found = NULL;
    while((ptr=strstr(ptr,sub))!=NULL){
        found = ptr;
        ptr = ptr+strlen(sub);
    }
    if(found==NULL){
        printf("SubString Not Found");
    }
    else{
        sort_substring(sort);
        strncpy(found,sort,strlen(sub));
    } 
    printf("%s\n",str);
}
