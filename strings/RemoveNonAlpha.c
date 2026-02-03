//wap to remove all the non alphabets from the given string
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
    int cnt=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    printf("%s\n",str);
    for(int i=0;str[i];i++){
        if(!(is_alpha(str[i]))){
            memmove(str+i,str+i+1,strlen(str+1)+1);
            cnt++;
            i--;
        }
    }
    if(cnt == 0){
        printf("There is No Non Alphabets are Present above Given String\n");
    }
    else{
        printf("After Removing Non Alphabets:\n");
        printf("%s\n",str);
    }
}