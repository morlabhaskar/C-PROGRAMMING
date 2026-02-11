#include<stdio.h>
#include<stdlib.h>
typedef struct Bst{
    int data;
    struct Bst *left;
    struct Bst *right;
}BST;
BST* createNode(int num){
    BST* newNode = (BST*)calloc(1,sizeof(BST));
    if(newNode==NULL){
        printf("Memory Allocation failed\n");
        exit(0);
    }
    newNode->data = num;
    return newNode;
}
void inorder(BST* ptr){
    if(ptr){
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }
}
BST *insertNode(BST *ptr,int data){
    if(ptr==NULL){
        return createNode(data);
    }
    if(data < ptr->data){
        ptr->left = insertNode(ptr->left,data);
    }
    else if(data > ptr->data){
        ptr->right = insertNode(ptr->right,data);
    }
    return ptr;
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
    char choice;
    int data;
    while(1){
        printf("i:insert p:print q:quit\n");
        scanf(" %c",&choice);
        switch(choice){
            case 'i' : 
                printf("Enter the Data to Insert :\n");
                scanf("%d",&data);
                root=insertNode(root,data);
                break;
            case 'p' :
                printf("Inorder :");
                inorder(root);
                printf("\n");
                break;
            case 'q' :
                freeTree(root);
                printf("Bye...\n");
                exit(0);
            default :
                printf("Invalid Option\n");
                break;
        }
    }
}
