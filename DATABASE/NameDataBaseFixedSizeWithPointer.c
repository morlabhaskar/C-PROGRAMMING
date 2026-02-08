//Name Data Base with Fixed Columns and Dynamic Rows
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count = 0,MAX=5;
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
    printf(" q : Quit\n");
    printf("=========================================\n");
    printf("Enter your choice:\n");
}
void *input(char (*ptr)[20]){
    ptr = realloc(ptr,(count+1)*sizeof(*ptr));
    printf("Enter a Name :\n");
    fgets(ptr[count],sizeof(ptr[count]),stdin);
    if(ptr[count][strlen(ptr[count])-1]=='\n') ptr[count][strlen(ptr[count])-1]='\0';
    count++;
    return ptr;
}
void print(char (*ptr)[20]){
    if(count==0) printf("Data Base is Empty !\n");
    else{
        printf("\n=== Stored Data ===\n");
        for(int i=0;i<count;i++){
            printf("names[%d] = %s\n",i,ptr[i]);
        }
        printf("===================\n");
    } 
}
void find(char (*ptr)[20]){
    int flag=1;
    char fname[20];
    if(count==0) printf("Data Base is Empty !\n");
    else{
        printf("Enter a Finding Name :\n");
        fgets(fname,sizeof(fname),stdin);
        if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]='\0';

        for(int i=0;i<count;i++){
            if(strcmp(fname,ptr[i])==0){
                flag=0;
                printf("\n=== Finding Data ===\n");
                printf("Name at Index of %d is name = %s\n",i,ptr[i]);
                printf("===================\n");
            }
        }
        if(flag) printf("Name is Not Found !\n");
    } 
}
void sort(char (*ptr)[20]){
    if(count==0){
        printf("Data Base is Empty!\n");
    }
    else{
        int i,j;
        char temp[20];
        for(i=count-1;i>=1;i--){
            for(j=0;j<i;j++){
                if(strcmp(ptr[j],ptr[j+1])>0){
                    strcpy(temp,ptr[j]);
                    strcpy(ptr[j],ptr[j+1]);
                    strcpy(ptr[j+1],temp);
                }
            }
        }
        printf("Data Base is Sorted\n");
    }
}
void *delete(char (*ptr)[20]){
    int i;
    if(count==0){
        printf("Data base is Empty!\n");
        return NULL;
    }
    INPUT:
    printf("Enter Index to Delete Record :\n");
    scanf("%d",&i);
    if(i>=count){
        printf("You Entered Index is Outoff Range! Please Enter <%d \n",count);
        goto INPUT;
    }
    memmove(ptr+i,ptr+i+1,(count-i-1)*sizeof(*ptr));
    realloc(ptr,--count*sizeof(*ptr));
    if(count==0) ptr=NULL;
    printf("Deleted Successfully\n");
    return ptr;
}
int main(){
    char (*names)[20]=NULL; //Only Columns are Fixed Rows are Dynamic
    char choice;
    while(1){
        printMenu();
        scanf(" %c",&choice);
        getchar();
        switch(choice){
            case 'i':names=input(names);break;
            case 'p':print(names);break;
            case 's':sort(names);break;
            case 'd':names=delete(names);break;
            case 'f':find(names);break;
            case 'q':free(names);
                     return 0;
            default:printf("ERROR : Invalid Entry !\n");
        }
    }
}