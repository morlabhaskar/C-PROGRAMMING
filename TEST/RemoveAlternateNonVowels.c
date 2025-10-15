//WAP to Remove Alternate Non Vowels in a Given String.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_vowel(char ch){
    ch = tolower(ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
int main(){
    char str[30],*ptr=NULL;
    int count = 0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    
    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    
    ptr=str;
    for(int i=0;(*ptr)!='\0';i++){
        if(!(is_vowel(*ptr))){
            count++;
            if(count%2==0){
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                ptr--;
            } 
        }
        ptr++;
    }
    printf("%s\n",str);
}