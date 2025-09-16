//wap to valdate the string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_alpha(char ch){
    ch = tolower(ch);
    if(ch >=97 && ch <= 122){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char str[30];

    INPUT:
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    
    for(int i=0;str[i];i++){
        if(is_alpha(str[i])==0){
            printf("Please Enter Valid String:\n");
            goto INPUT;
        }
    }
    printf("Your String is Valid :\n");
    printf("%s\n",str);
}