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
    printf(" i : Input Record\n");
    printf(" p : Print All Records\n");
    printf(" f : Find a Record\n");
    printf(" s : Sort Records\n");
    printf(" d : Delete a Record\n");
    printf(" S : Save Records\n");
    printf(" q : Quit\n");
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
    printf("Enter Data :\n");
    ptr[count++]=getString();
    return ptr;
}

void print(char **ptr){
    if(count == 0) printf("\n=== Data is Empty! ===\n");
    else {
        printf("\n=== Stored Data ===\n");
        for(int i = 0; i < count; i++){
            printf(" [%d] -> %s\n", i, ptr[i]);
        }
        printf("===================\n");
    }
}

void sort(char **ptr){
    char temp[20];
    for(int i=count-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(strcmp(ptr[j],ptr[j+1])>0){
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
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
            // case 'd':names=delete(names);break;
            case 's':sort(names);break;
            case 'q':
                    for(int i=0;i<count;i++) free(names[i]);
                    free(names);
                    return 0;
            default : printf("ERROR : Invalid Entry !\n");
        }
    }
}