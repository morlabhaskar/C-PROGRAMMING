





















// #include <stdio.h>
// #include <stdlib.h>

// // Define the Node structure
// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* head = NULL;

// // Create a new node
// struct Node* createNode(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode; 
// }

// // Insert at beginning
// void insertAtBeginning(int value) {
//     struct Node* newNode = createNode(value);
//     newNode->next = head;
//     head = newNode;
//     printf("Inserted %d at beginning\n", value);
// }

// // Insert at end
// void insertAtEnd(int value) {
//     struct Node* newNode = createNode(value);
//     if (head == NULL) {
//         head = newNode;
//     } else {
//         struct Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
//     printf("Inserted %d at end\n", value);
// }

// // Delete a node by value
// void deleteNode(int value) {
//     struct Node* temp = head;
//     struct Node* prev = NULL;

//     if (temp != NULL && temp->data == value) {
//         head = temp->next;
//         free(temp);
//         printf("Deleted node with value %d\n", value);
//         return;
//     }

//     while (temp != NULL && temp->data != value) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Value %d not found in list\n", value);
//         return;
//     }

//     prev->next = temp->next;
//     free(temp);
//     printf("Deleted node with value %d\n", value);
// }

// // Display all nodes
// void displayList() {
//     struct Node* temp = head;
//     if (temp == NULL) {
//         printf("List is empty\n");
//         return;
//     }
//     printf("Linked List: ");
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Main function with example operations
// int main() {
//     insertAtEnd(10);
//     insertAtBeginning(5);
//     insertAtEnd(20);
//     insertAtBeginning(2);
//     displayList();

//     deleteNode(10);
//     displayList();

//     deleteNode(100); // Not in list
//     return 0;
// }