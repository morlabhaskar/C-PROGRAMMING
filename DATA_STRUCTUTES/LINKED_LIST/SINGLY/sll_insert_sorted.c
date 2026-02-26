//WAP to insert Node in Sorted order in sll.
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* link;
}NODE;
NODE* head=NULL;
NODE* createNode(int val){
    NODE* new=calloc(1,sizeof(NODE));
    new->data=val;
    return new;
}
NODE *insertAtSorted(int value){
    NODE *newNode=createNode(value);
    //for first node
    if(head==NULL){
        return newNode;
    }
    //for insert first
    if((head->data)>value){
        newNode->link=head;
        head=newNode;
        return head;
    }
    //for insert middle or end
    NODE *temp=head;
    while((temp->link)!=NULL && (temp->link->data)<value){
        temp=temp->link;
    }
    newNode->link=temp->link;
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
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main(){
    char ch;
    while(1){
        printf("\ni:insert   p:print  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter data value :\n");
                int num;
                scanf("%d",&num);
                head=insertAtSorted(num);
                break;
            case 'p':
                displayNodes();
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