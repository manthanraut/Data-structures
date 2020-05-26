#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node{
int val;
struct node *next;
};
struct node *head;
void main(){
    int choice;
    while(1){
    printf("Select operation on stack\n");
    printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
    scanf("%d",&choice);
    switch(choice){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
    break;
default:
    printf("Incorrect choice\n");
    }
    }
}
void push(){
int v;
struct node *node=(struct node *)malloc(sizeof(struct node));
if(node==NULL){
    printf("Stack is FULLn\n");
}
else{
    printf("Enter the value ");
    scanf("%d",&v);
    if (head==NULL){
        node->val=v;
        node->next=NULL;
        head=node;
    }
    else{
        node->val=v;
        node->next=head;
        head=node;
    }

}
printf("Item pushed successfully\n");
}
void pop(){
   int item;
   struct node *ptr;
if(head==NULL){
    printf("Empty Stack\n");
}
else{
    item=ptr->val;
    ptr=head;
    head=head->next;
    free(ptr);
    printf("Item deleted successfully\n");
}
}
void display(int arr[]){
struct node *ptr;
int i;
ptr=head;
if (ptr==NULL)
    printf("Stack is EMPTY\n");
else{
while(ptr!=NULL){
    printf("%d->",ptr->val);
    ptr=ptr->next;
}
printf("\n");
}
}


