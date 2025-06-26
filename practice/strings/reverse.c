#include<stdio.h>
#include<string.h>

void main(){
    char s[30],c;
    int i,l,j;
    printf("Enter String :");
    gets(s);
    l = strlen(s);
    // for(i=0;i<l/2;i++){
    //     c = s[i];
    //     s[i] = s[l-1-i];
    //     s[l-1-i] = c;

    // }
    for(i=0,j=l-1;i<j;i++,j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("Reverse is : %s",s);

}