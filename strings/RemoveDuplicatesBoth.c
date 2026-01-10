//wap to Remove All Duplicates as well as Original in the given string
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    for(int i=0;str[i];i++){
        for(int j=i+1;str[j];j++){
            if(str[i]==str[j]){
                memmove(str+j,str+j+1,strlen(str+j+1)+1);
                j--;
            }
        }
        memmove(str+i,str+i+1,strlen(str+i+1)+1);
    }
    printf("%s\n",str);
}