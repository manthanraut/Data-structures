#include<stdio.h>
struct node {
int data;
struct node *next;
struct node *prev;
};
struct node *front=NULL;
struct node *rear=NULL;

void insert_from_front();
void delete_from_front();
void insert_from_rear();
void delete_from_rear();
void display();

void main(){
int choice;
while(1){
    printf("1. Insert From Front\n2. Delete from Front\n3. Insert From Rear\n4. Delete From Rear\n5. DISPLAY\n6. EXIT\n");
    printf("Enter your choice : \n");
scanf("%d",&choice);
switch(choice){
case 1:
    insert_from_front();
    break;
case 2:
    delete_from_front();
    break;
case 3:
    insert_from_rear();
    break;
case 4:
    delete_from_rear();
    break;
case 5:
    display();
    break;
case 6:
    exit(0);
default:
    printf("Invalid choice\n");
}
}
}
void insert_from_rear(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
     printf("Enter value to be inserted\n");
     scanf("%d",&item);
      ptr->data=item;
    if(front==NULL && rear==NULL){
        front=rear=ptr;
        front->next=NULL;
        front->prev=NULL;
        rear->next=NULL;
        rear->prev=NULL;
        printf("Inserted successfully\n");
    }
    else{
    ptr->next=NULL;
        rear->next=ptr;
        ptr->prev=rear;
        rear=ptr;
        printf("Inserted successfully\n");
    }

}
void insert_from_front(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
     printf("Enter value to be inserted\n");
     scanf("%d",&item);
      ptr->data=item;
    if(front==NULL && rear==NULL){
        front=rear=ptr;
        front->next=NULL;
        front->prev=NULL;
        rear->next=NULL;
        rear->prev=NULL;
        printf("Inserted successfully\n");
    }
    else{
    ptr->next=front;
    front->prev=ptr;
    ptr->prev=NULL;
        front=ptr;
        printf("Inserted successfully\n");
    }

}
void delete_from_front(){
struct node *ptr;
    int item;
    if(front==NULL && rear==NULL){
        printf("Already Empty\n");
    }
    else{
    ptr=front;
    front=front->next;
    front->prev=NULL;
    printf("Element %d Deleted successfully\n",ptr->data);
    free(ptr);
    }
}
void delete_from_rear(){
struct node *ptr;
    int item;
    if(front==NULL && rear==NULL){
        printf("Already Empty\n");
    }
    else{
    ptr=rear;
    rear=ptr->prev;
    rear->next=NULL;
    printf("Element %d Deleted successfully\n",ptr->data);
    free(ptr);
    }
}
void display(){
    struct node *ptr;
    ptr=front;
if(front==NULL && rear==NULL){
        printf("Already Empty\n");
    }
else{
printf("front-->");
while(ptr!=NULL){
    printf("%d-->",ptr->data);
    ptr=ptr->next;
}
printf("rear\n");
}
}
