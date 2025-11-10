#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
    int roll;
    char name[20];
    struct Node *link;
}NODE;
int size=sizeof(NODE)-sizeof(NODE*);
NODE* head=NULL;
NODE* createNode(int roll,char *name){
    NODE* new=calloc(1,sizeof(NODE));
    new->roll=roll;
    strcpy(new->name,name);
    return new;
}
NODE* insertAtEnd(int roll,char *name){
    NODE* newNode=createNode(roll,name);
    if(head==NULL){
        return newNode;
    }
    NODE* temp=head;
    while((temp->link)!=NULL){
        temp=temp->link;
    }
    temp->link=newNode;
    return head;
}
void displayNodes(){
    NODE* temp=head;
    if(head==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    printf("Linked List is :\n");
    while(temp!=NULL){
        printf("%d  %s\n",temp->roll,temp->name);
        temp=temp->link;
    }
}
void save(char *filename){
    FILE *fptr=NULL;
    if(head==NULL){
        printf("Data is Empty\n");
        return;
    }
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("file not open\n");
        return;
    }
    NODE *temp=head;
    while(temp!=NULL){
        fwrite(temp,size,1,fptr);
        temp=temp->link;
    }
    fclose(fptr);
     printf("Data saved to file successfully!\n");
}
NODE *sync(char *filename){
    NODE var;
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("file not open\n");
        return head;
    }
    while((fread(&var,size,1,fptr))==1){
        head=insertAtEnd(var.roll,var.name);
    }
    fclose(fptr);
     printf("Data sync from file successfully!\n");
    return head;
}
//./a.exe  filename
int main(int argc,char *argv[]){
    char ch;
    head=sync(argv[1]);
    while(1){
        printf("\ni:insert   p:print  s:save  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter roll Number :\n");
                int roll;
                scanf("%d",&roll);
                char name[20];
                printf("Enter Name :\n");
                getchar();
                fgets(name,sizeof(name),stdin);
                if(name[strlen(name)-1]=='\n') name[strlen(name)-1]='\0';
                head=insertAtEnd(roll,name);
                break;
            case 'p':
                displayNodes();
                break;
            case 's':
                save(argv[1]);
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
