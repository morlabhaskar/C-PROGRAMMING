#ifndef NODE_H
#define NODE_H

typedef struct Node {
    int roll;
    char name[20];
    struct Node *link;
} NODE;

extern NODE *head;  // declare the global head pointer
extern int size;

void displayNodes();
void save(char*);
NODE *createNode(int,char*);
NODE *insertAtEnd(int,char*);
NODE *sync(char *);

#endif
