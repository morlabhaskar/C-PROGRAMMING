//wap to remove all the vowels from the given string
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

char print_first_vowel(char *str){
    for(int i=0;str[i];i++){
        if(is_vowel(str[i])){
            // printf("First Vowel in \"%s\" is \"%c\"\n",str,str[i]);
            return str[i];
            break;
        }
    }
}

char print_last_vowel(char *str){
    for(int i=strlen(str)-1;str[i];i--){
        if(is_vowel(str[i])){
            // printf("Last Vowel in \"%s\" is \"%c\"\n",str,str[i]);
            return str[i];
            break;
        }
    }
}

int main(){
    char str[30];
    char first,last;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    first = print_first_vowel(str);
    last = print_last_vowel(str);
    printf("First Vowel in \"%s\" is \"%c\"\n",str,first);
    printf("Last Vowel in \"%s\" is \"%c\"\n",str,last);

}