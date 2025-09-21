//WAP to Hide First Occurance,sort Second Occurance,Reverse Third Occurance and remove all SubStrings in a given String
#include<stdio.h>
#include<string.h>
// void reverse_substring(char *sub,char *rev){
void reverse_substring(char *rev){
    // int i=0;
    // for(int j=strlen(sub)-1;j>=0;j--){
    //     rev[i]=sub[j];
    //     i++;
    // }
    // rev[i]='\0';
    char *left = rev,*right = rev+strlen(rev)-1;
    while(left<right){
        char temp;
        if((*left)!=(*right)){
            temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
}
void sort_substring(char *sort){
    
    for(int i=strlen(sort)-1;i>=0;i--){
        char temp;
        for(int j=0;j<i;j++){
            if(sort[j]>sort[j+1]){
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }
}
int main(){
    char str[100],sub[30],rev[30],sort[30],*ptr=NULL;
    int count = 0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);//hdnanighnanikdnanirfnanijkdnani
    printf("Enter Sub-String :\n");
    fgets(sub,sizeof(sub),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    if(sub[strlen(sub)-1] == '\n'){
        sub[strlen(sub)-1] = '\0';
    }
    strcpy(sort,sub);//sub copy to sort
    strcpy(rev,sub);//sub copy to rev
    ptr = str;
    while((ptr=strstr(ptr,sub))!=NULL){
        count++;
        if(count == 1){
            memset(ptr,'*',strlen(sub));
            ptr = ptr+strlen(sub);
        }
        else if(count == 2){
            sort_substring(sort);
            strncpy(ptr,sort,strlen(sub));
            ptr = ptr+strlen(sub);
        }
        else if(count == 3){
            reverse_substring(rev);//for Reversing
            strncpy(ptr,rev,strlen(sub));
            ptr = ptr+strlen(sub);
        }
        else{
            memmove(ptr,ptr+strlen(sub),strlen(ptr+strlen(sub))+1);
        }
    }
    printf("%s\n",str);
}
