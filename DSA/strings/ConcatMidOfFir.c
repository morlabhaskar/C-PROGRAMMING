//Insert a Second String in Middle of the First String
#include<stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30],str3[50];
    printf("Enter a String1 :\n");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter a String2 :\n");
    fgets(str2,sizeof(str2),stdin);

    if(str1[strlen(str1)-1] == '\n'){
        str1[strlen(str1)-1] = '\0';
    }
    if(str2[strlen(str2)-1] == '\n'){
        str2[strlen(str2)-1] = '\0';
    }

    printf("Output is : \n");
    int tlen = strlen(str1)+strlen(str2),mid = strlen(str1)/2;
    printf("%d\n",tlen);
    printf("%d\n",mid);
    int x = 0,a=0,z=mid+strlen(str2);
    for(int i=0;i<=tlen;i++){
        if(i<mid){
            str3[x] = str1[i];
            x++;
        }
        if(i>=mid && a<=strlen(str2)){
            str3[i] = str2[a];
            a++;
        }
        if(a==strlen(str2)){
            str3[i] = str1[z];
            z++;
        }
    }
    printf("%s\n",str3);
    for(int j=0;str3[j]!='\0';j++){
        printf("str3[%d]=%c\n",j,str3[j]);
    }
}