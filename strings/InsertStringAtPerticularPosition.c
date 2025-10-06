#include<stdio.h>
#include<string.h>
char *my_strncpy(char *des,char *src,int len){
    for(int i=0;i<len && src[i];i++){
        des[i]=src[i];
    }
}
int main(){
    char str1[30],str2[30];
    int pos;
    printf("Enter a String1 :\n");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter a String2 :\n");
    fgets(str2,sizeof(str2),stdin);
    printf("Enter a Position :\n");
    scanf("%d",&pos);
    if(str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if(str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    if(pos>strlen(str1)){
         printf("You Entered Position is Outoff Range in String-1\n");
         return 0;
    }
    else{
        for(int i=0;str1[i];i++){
            if(i==pos){
                memmove(str1+i+strlen(str2),str1+i,strlen(str2)+1);
            }
        }
        my_strncpy(str1+pos,str2,strlen(str2));
    }
    printf("%s\n",str1);
}