//wap to print last vowel in the given string
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
    int flag=1;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    printf("%s\n",str);
    for(int i=strlen(str);i>=0;i--){
        // printf("str[%d]=%c\n",i,str[i]);
        if(is_vowel(str[i]) && flag){
            printf("Last Vowel is = \"%c\"",str[i]);
            flag=0;
        }
    }
}