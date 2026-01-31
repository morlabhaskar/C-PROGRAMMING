#include <stdio.h>
#include <string.h>
//char *strncat (char *, const char *, size_t);
int main(){
    // int l1,l2,i;
    char s1[20] = "Morla";
    char s2[10] = "Bhaskar";

    // strncat(s1,s2,2);
    strcat(s1,s2);
    // l1 = strlen(s1);
    // l2 = strlen(s2);
    // for (i=0;i<=l2;i++){
    //     s1[l1+i] = s2[i];
    // }
    printf("After Concat : %s",s1);


}