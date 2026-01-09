//Move all Vowels to Last of a given String.
#include<stdio.h>
#include<string.h>
int is_vowel(char ch){
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
    char str[100],temp;
    char *ptr = NULL;
    int i=0,j=strlen(str);
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    ptr=str;
    while(i<j){
        if(is_vowel(str[i])){
            temp = str[i];
            memmove(ptr+i,ptr+i+1,j-i);
            str[j-1] = temp;
            j--;
        }
        else{
            i++;
        }
    }
    str[strlen(str)]='\0';
    printf("%s\n",str);
    for(int k=0;str[k];k++){
        printf("str[%d]=%c\n",k,str[k]);
    }
}
