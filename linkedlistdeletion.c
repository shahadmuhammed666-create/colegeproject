#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};


void display(struct node *head){
    struct node *temp=head;
    if(head==NULL){
        printf("Linked list is empty");

    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
struct node*insertionAtEnd(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed !\n");
        return head;
    }
    newnode->data = val;
    newnode->next = NULL; // New node will be the last node, so next is NULL

    if (head == NULL) {
        return newnode; // If the list is empty, new node becomes the head

    }
    
    // Traverse to the last node
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode; // Link the last node to the new node
    return head;
}
struct node* insertAfterNode(struct node *head,int targetValue, int val) {
    struct node *temp = head;

    //Search for the node containing targetvalue
    while (temp != NULL && temp->data != targetValue) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with value %d not found in the list!\n", targetValue);
        return head; // Target value not found, return original head
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed !\n");
        return head;
    }
    newnode->data = val;
    newnode->next = temp->next; // Step 1: Link newnode to the next node
    temp->next = newnode;      // Step 2: Link the target node to the newnode
    return head; 
}
struct node* deleteFromBeginning(struct node *head) {

    if (head == NULL) {
        printf("List is already empty. Nothing to delete.\n");
        return NULL;
    }
    struct node *temp = head; // Store reference to current head
    head = head->next; // Shift head pointer to 2nd Node
    free(temp);               // Release memory of first node
    
    printf("First node deleted successfully.\n");
    return head;
}
struct node deleteFromEnd(struct node *head){

    if(head == NULL) {
        printf("List is already empty. Nothing to delete.\n");
        return NULL;
    }

    while(temp->next->next != NULL)
}

int main(){
    struct node *head=NULL,*newnode,*temp;
    int choice=1;
    while(choice) {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
            printf("Memory allocation failed\n");
            break;
        }

    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if (head==NULL) {
        head = newnode;
        temp = head;
    }
    else {
         temp->next = newnode;
         temp = newnode;

    }
    printf("Do you want to insert more data? (1 for yes, 0 for no):");
    scanf("%d",&choice);
    }
    printf("The linked list is : ");
    display(head);
    printf("\n The linked list after insertion at the end is : ");
    display(insertionAtEnd(head, 10));
    printf("\n The linked list after insertion after a node is : ");
    display(insertAfterNode(head, 33, 25));
    printf("\n Deleting first node");
    display(deleteFromBeginning(head));
    return 0;

}