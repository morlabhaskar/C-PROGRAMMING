#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Block{
    char name[100];
    int rooms;
}BLOCK;

typedef struct School{
    int id;
    char name[30];
    BLOCK *block;
    struct School *link;
}SCHOOL;

SCHOOL *head=NULL;

BLOCK *createBlock(char *nam,int room){
    BLOCK *newNode=calloc(1,sizeof(BLOCK));
    strcpy(newNode->name,nam);
    newNode->rooms=room;
    return newNode;
}

SCHOOL *createSchool(int idd,char *nam,char *block_name,int rooms){
    SCHOOL *newNode=calloc(1,sizeof(SCHOOL));
    newNode->id=idd;
    strcpy(newNode->name,nam);
    newNode->block=createBlock(block_name,rooms);
    if(head==NULL){
        return newNode;
    }
    SCHOOL *temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=newNode;
    
    return head;
}

void print(){
    int i=0;
    SCHOOL *temp=head;
    printf("List is :\n");
    while(temp!=NULL){
        i++;
        printf("Record[%d] \n:",i);
        printf("School Id : %d\n",temp->id);
        printf("School Name : %s\n",temp->name);
        printf("School Block Name : %s\n",temp->block->name);
        printf("School Block No.of Rooms : %d\n",temp->block->rooms);
        temp=temp->link;
    }
}

int main(){
    char ch;
    while(1){
        printf("\ni:insert   p:print  s:save  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter School Id :\n");
                int id,rooms;
                scanf("%d",&id);
                char name[20],block_name[30];
                printf("Enter School Name :\n");
                getchar();
                fgets(name,sizeof(name),stdin);
                if(name[strlen(name)-1]=='\n') name[strlen(name)-1]='\0';
                printf("Enter Block Name :\n");
                fgets(block_name,sizeof(block_name),stdin);
                if(block_name[strlen(block_name)-1]=='\n') block_name[strlen(block_name)-1]='\0';
                printf("Enter No.of Rooms :\n");
                scanf("%d",&rooms);
                head=createSchool(id,name,block_name,rooms);
                break;
            case 'p':
                print();
                break;
            case 'q':
                printf("Byee\n");
                exit(0);
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
    
}