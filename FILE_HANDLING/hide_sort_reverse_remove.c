#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count=0;
void *readFromFile(char *filename){
    char (*p)[100]=NULL,str[100];
    FILE *fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("File Not opened!");
        exit(0);
    }
    while(fgets(str,sizeof(str),fptr)){
        p=realloc(p,(count+1)*sizeof(*p));
        strcpy(p[count],str);
        count++;
    }
    fclose(fptr);
    return p;
}
void hideSubString(char *ptr,char *sub){
    memset(ptr,'.',strlen(sub));
    
}
void sortSubString(char *p){
    for(int i=strlen(p)-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(p[j]>p[i]){
                char temp=p[j];
                p[j]=p[i];
                p[i]=temp;
            }
        }
    }
}
void reverseSubString(char *p,char *sub){
    char *left=p,*right=p+strlen(sub)-1;
    while(left<right){
        if((*right)=='\n'){
            right--;
        }
        if((*left)!=(*right)){
            char temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
}
void *updatedLines(char (*p)[100],char *sub){
    int sub_len=strlen(sub);
    char sort[10];
    strcpy(sort,sub);

    sortSubString(sort);
    
    for(int i=0;i<count;i++){
        int flag=0;
        char *ptr=p[i];
       while((ptr = strstr(ptr, sub)) != NULL){
            if(flag==0){
                hideSubString(ptr,sub);
                ptr=ptr+strlen(sub);
            }
            else if(flag==1){
                strncpy(ptr,sort,sub_len);
                ptr=ptr+strlen(sub);
            }
            else if(flag==2){
                reverseSubString(ptr,sub);
                ptr=ptr+strlen(sub);
            }
            else{
                memmove(ptr,ptr+sub_len,strlen(ptr+sub_len)+1);
            }
            flag++;
        }
    }
    return p;
}
void writeToFile(char (*p)[100],char *filename){
    FILE *fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("File Not Opened!");
        exit(0);
    }
    for(int i=0;i<count;i++){
        fputs(p[i],fptr);
    }
    fclose(fptr);
}
//a.out  filename   substring
int main(int argc,char *argv[]){
    if(argc != 3){
        printf("Invalid command line arguments!");
        exit(0);
    }
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=updatedLines(lines,argv[2]);
    writeToFile(lines,argv[1]);
}

/*
adnanihynanithnanikjnanis  
adhjnaniuknanijnanif
adnanikulnaniljnanikjnaniy

ad****hyainnthinankjs  
adhj****ukainnjinanf
ad****kulainnljinankjy
*/















