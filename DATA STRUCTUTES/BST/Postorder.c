#include<stdio.h>
#include<stdlib.h>
typedef struct Bst{
    int data;
    struct Bst *left;
    struct Bst *right;
}BST;
BST *createNode(int data){
    BST *newNode = (BST*)calloc(1,sizeof(BST));
    newNode->data = data;
    return newNode;
}
BST *insertNode(BST *ptr,int data){
    if(ptr==NULL){
        return createNode(data);
    }
    else if(data < ptr->data){
        ptr->left = insertNode(ptr->left,data);
    }
    else if(data > ptr->data){
        ptr->right = insertNode(ptr->right,data);
    }
    return ptr;
}
void Postorder(BST *ptr){
    if(ptr){
        Postorder(ptr->left);
        Postorder(ptr->right);
        printf("%d ",ptr->data);
    }
}
void freeTree(BST *ptr){
    if(ptr==NULL){
        return;
    }
    freeTree(ptr->left);
    freeTree(ptr->right);
    free(ptr);
}
int main(){
    BST *root = NULL;
    int data;
    char choice;
    while(1){
        printf("i:insert p:print q:quit\n");
        scanf(" %c",&choice);
        switch(choice){
            case 'i' :
                printf("Enter the Data to Insert :\n");
                scanf("%d",&data);
                root = insertNode(root,data);
                break;
            case 'p' :
                printf("Postorder : ");
                Postorder(root);
                printf("\n");
                break;
            case 'q' :
                freeTree(root);
                printf("Byee...\n");
                exit(0);
            default :
                printf("Invalid Option\n");
                break;
        }
    }
}