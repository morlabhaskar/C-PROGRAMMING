//Name Data Base with Dynamic Rows and Columns
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count=0;
void printMenu() {
    printf("\n");
    printf("=========================================\n");
    printf("               MAIN MENU               \n");
    printf("=========================================\n");
    printf("        i : Input Record\n");
    printf("        p : Print All Records\n");
    printf("        f : Find a Record\n");
    printf("        o : Sort Records\n");
    printf("        s : Save Records\n");
    printf("        d : Delete a Record\n");
    printf("        q : Quit\n");
    printf("=========================================\n");
    printf("Enter your choice:\n");
}

char *getString(){
    int i=0;
    char *p=NULL;
    do{
        p=realloc(p,i+1);
        p[i]=getchar();
    }while(p[i++]!='\n');
    p[i-1]='\0';
    return p;
}

void *input(char **ptr){
    ptr=realloc(ptr,(count+1)*sizeof(*ptr));
    printf("Enter Name :\n");
    ptr[count++]=getString();
    return ptr;
}

void print(char **ptr){
    if(count == 0) printf("\033[1;33m=== Data is Empty! ===\033[0m\n");
    else {
        printf("\033[1;34m");
        printf("\n======== Stored Data ========\n");
        for (int i = 0; i < count; i++) {
            printf("     names[%d] -> %s\n", i, ptr[i]);
        }
        printf(" ==============================\n");
        printf("\033[0m");
    }
}

void sort(char **ptr){
    if(count<2){
        printf("\033[1;33m=== The Data is Too Short! ===\033[0m\n");
        return;
    }
    char *temp;
    for(int i=count-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(strcmp(ptr[j],ptr[j+1])>0){
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    if(count>=2) printf("\033[1;32m=== Sorted Successfully ===\033[0m\n");
}
void find(char **ptr){
    if(count==0){
        printf("\033[1;33m=== Data Base is Empty! ===\033[0m\n");
        return;
    }
    int flag=1;
    char fname[30];  
    printf("Enter a Name :\n");
    fgets(fname,sizeof(fname),stdin);
    if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]='\0';   
    for(int i=0;i<count;i++){
        if(strcmp(fname,ptr[i])==0){
            flag=0;
            printf("\033[1;32m%s is Found at Index %d\033[0m\n",ptr[i],i);
        }
    }       
    if(flag){
        printf("\033[1;33m=== Name is Not Found ! ===\033[0m\n");
    }         
    
}

void *delete(char **ptr){
    int i;
    if(count==0){
        printf("\033[1;33m=== Data Base is Empty! ===\033[0m\n");
        return NULL;
    }
    INPUT:
    printf("Enter a Index to Delete Record :\n");
    scanf("%d",&i);
    if(i>=count){
        printf("\033[1;33m=== You Entered Outoff Range, Please Enter <%d ===\033[0m\n",count);
        goto INPUT;
    }
    free(ptr[i]);
    memmove(ptr+i,ptr+i+1,(count-i-1)*sizeof(*ptr));
    ptr = realloc(ptr,--count*sizeof(*ptr));
    if(count==0){
        printf("\033[1;31m=== All Records are Deleted ===\033[0m\n");
        ptr=NULL;
    }
    else printf("\033[1;31m=== Record Deleted Successfully ===\033[0m\n");
    return ptr;
}

int main(){
    char **names=NULL;
    char choice;
    while(1){
        printMenu();
        scanf(" %c",&choice);
        getchar();
        switch(choice){
            case 'i':names=input(names);break;
            case 'p':print(names);break;
            case 'd':names=delete(names);break;
            case 'o':sort(names);break;
            case 'f':find(names);break;
            case 'q':
                    for(int i=0;i<count;i++) free(names[i]);
                    free(names);
                    printf("\033[1;32mExiting Program... Goodbye!\033[0m\n");
                    return 0;
            default : printf("\033[1;33m=== ERROR : Invalid Entry ! ===\033[0m\n");
        }
    }
}