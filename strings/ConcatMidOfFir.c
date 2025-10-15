//Insert a Second String in Middle of the First String
#include<stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30];
    printf("Enter a String1 :\n");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter a String2 :\n");
    fgets(str2,sizeof(str2),stdin);

    if(str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if(str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    printf("Output is : \n");
    int mid = strlen(str1)/2;
    char temp[30];
    strcpy(temp,str1+mid);
    strcpy(str1+mid,str2);
    strcpy(str1+strlen(str1),temp);
    //strcat(str1,temp);

    printf("%s\n",str1);
}