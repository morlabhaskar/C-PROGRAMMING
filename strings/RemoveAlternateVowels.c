//wap to print Alternate vowels in the given string
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
    int cnt=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    for(int i=0;str[i];i++){
        if(is_vowel(str[i])){
            if(cnt%2==0){
                memmove(str+i,str+i+1,strlen(str+i+1)+1);
                i--;
            }
            cnt++;
        }
        
    }
    printf("%s\n",str);
}