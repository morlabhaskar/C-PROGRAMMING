//wap to remove the fist vowel in the given string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_vowel(char ch){
    ch = tolower(ch);
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
int main(){
    char str[30];
    int flag=1,cnt=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    printf("%s\n",str);
    for(int i=0;str[i];i++){
        if(is_vowel(str[i]) && flag){
            memmove(str+i,str+i+1,strlen(str+i)+1);
            flag=0;
            cnt++;
        }
    }
    if(cnt == 0){
        printf("There is No Vowels are in above Given String\n");
    }
    else{
        printf("%s\n",str);
    }
}