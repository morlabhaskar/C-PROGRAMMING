//wap to Count the Repeated Characters in the given string
#include<stdio.h>
#include<string.h>
int main(){
    char str[30],ch;
    int cnt=0,flag=1;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    printf("Enter Single Character :\n");
    scanf("%c",&ch);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }

    for(int i=0;str[i];i++){
            if(str[i]==ch){
                cnt++;
                flag=0;
            }
        
    }
    if(flag){
        printf("not found");
    }
    else{
        printf("%d\n",cnt);
    }
    
}