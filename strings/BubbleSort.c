#include<stdio.h>
#include<string.h>
int main(){
    char str[30],temp;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }

    for(int i=strlen(str)-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(str[j]>str[j+1]){
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("%s\n",str);
}