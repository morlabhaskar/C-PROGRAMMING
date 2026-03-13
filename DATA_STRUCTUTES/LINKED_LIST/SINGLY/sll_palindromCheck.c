#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}NODE;
NODE *createNode(int data){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=data;
    return newNode;
}
NODE *insert(NODE *head,int data){
    NODE *newNode = createNode(data);
    if(head==NULL){
        return newNode;
    }
    if(head->next==NULL){
        head->next=newNode;
        return head;
    }
    NODE *temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
void display(NODE *head){
    if(head==NULL){
        printf("List is Empty\n");
        return;
    }
    if(head->next==NULL){
        printf("%d\n",head->data);
        return;
    }
    NODE *temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int is_palindrome(NODE *head){
    if(head==NULL){
        printf("List is Empty\n");
        return 0;
    }
    int *stack=NULL,top=-1;
    NODE* temp=head;
    while(temp){
        stack=realloc(stack,(top+2)*sizeof(int));
        stack[++top]=temp->data;
        temp=temp->next;
    }
    temp=head;
    while(temp){
        if(temp->data != stack[top--]){
            free(stack);
            return 0;
        }
        temp=temp->next;
    }
    free(stack);
    return 1;
}
void freeup(NODE *head){
    if(head->next==NULL){
        free(head);
    }else{
        NODE *del=head,*temp=head;
        while(temp){
            del=temp;
            temp=temp->next;
            free(del);
        }
    }
    printf("Memory Free Successfully\n");
}
int main(){
    NODE *head=NULL;
    char ch;
    while(1){
        printf("i:insert  p:print  c:checkPalindrom  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter the Data to insert :\n");
                int data;
                scanf("%d",&data);
                head=insert(head,data);
                break;
            case 'p':
                display(head);
                break;
            case 'c':
                is_palindrome(head) ? printf("List is Palindrom\n") : printf("List is Not a Palindrom\n");
                break;
            case 'q':
                freeup(head);
                printf("Bye...\n");
                return 0;
            default :
                printf("Invalid Operation\n");
                break;
        }
    }
}