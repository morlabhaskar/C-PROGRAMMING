//wap to Remove All Duplicates in the given string
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    for(int i=0;str[i];i++){
        for(int j=i+1;str[j];j++){
            if(str[i]==str[j]){
                memmove(str+j,str+j+1,strlen(str+j+1)+1);
                j--;
            }
        }
        
    }
    printf("%s\n",str);
}