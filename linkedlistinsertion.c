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
struct node* insertionAtBeginning(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed !\n");
        return head;
    }
    newnode->data = val;
    newnode->next = head;    // point new node to the old first node
    head = newnode;          // Make newnode to the new head
    return head;

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
    display(insertionAtBeginning(head, 10));
    return 0;

}