#include<stdio.h>
#include<string.h>
int main(){
    char s1[30],s2[30],s3[30],s4[100];
    printf("Enter a String1 :\n");
    fgets(s1,sizeof(s1),stdin);

    printf("Enter a String2 :\n");
    fgets(s2,sizeof(s2),stdin);

    printf("Enter a String3 :\n");
    fgets(s3,sizeof(s3),stdin);

    if(s1[strlen(s1)-1] == '\n') s1[strlen(s1)-1] = '\0';
    if(s2[strlen(s2)-1] == '\n') s2[strlen(s2)-1] = '\0';
    if(s3[strlen(s3)-1] == '\n') s3[strlen(s3)-1] = '\0';

    int i;
    for(i=0;s1[i]!='\0';i++){
        s4[i] = s1[i];
    }
    s4[i++] = ' ';
    for(int j=0;s2[j]!='\0';j++){
        s4[i] = s2[j];
        i++;
    }
    s4[i++] = ' ';
    for(int k=0;s3[k]!='\0';k++){
        s4[i] = s3[k];
        i++;
    }
    s4[i++] = '\0';
    printf("%s\n",s4);
}