//WAP to insert Node at perticular position in sll.
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *link;
}NODE;
NODE *head=NULL;
NODE *createNode(int val){
    NODE *newNode=calloc(1,sizeof(NODE));
    newNode->data=val;
    return newNode;
}
NODE *insertAtPos(int val,int pos){
    NODE *newNode = createNode(val);
    //if list is empty
    if(head==NULL){
        if(pos != 1){
            printf("list is empty you add only pos 1\n");
            return head;
        }
        return newNode;
    }
    //count nodes 
    int len=0;
    NODE *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->link;
    }
    //check position
    if((pos<1)||(pos>len+1)){
        printf("outoff range\n");
        return head;
    }
    //insert at beginning
    if(pos==1){
        newNode->link=head;
        head=newNode;
        return head;
    }
    //insert middle or end
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->link;
    }
    newNode->link=temp->link;
    temp->link=newNode;
    return head;
}
NODE* insertAtEnd(int value){
    NODE* newNode=createNode(value);
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
    if(head==NULL){
        printf("List is Empty");
        return;
    }
    NODE *temp=head;
    while(temp){
        printf("%d  ",temp->data);
        temp = temp->link;
    }
}
void freeup(){
    if(head==NULL){
        return;
    }
    if(head->link==NULL){
        free(head);
        return;
    }
    NODE *temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
        free(head);
        head=temp;
    }
    free(head);
    printf("Free Success\n");
}
int main(){
    char ch;
    while(1){
        printf("\ni:insert   p:print  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter data :\n");
                int num;
                scanf("%d",&num);
                head=insertAtEnd(num);
                break;
            case 'a':
                printf("Enter data :\n");
                int num1,pos;
                scanf("%d",&num1);
                printf("Enter position :\n");
                scanf("%d",&pos);
                NODE *temp1=insertAtPos(num1,pos);
                if(temp1!=NULL){
                    head=temp1;
                }
                break;
            case 'p':
                displayNodes();
                break;
            case 'q':
                freeup();
                printf("Byee\n");
                exit(0);
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
}