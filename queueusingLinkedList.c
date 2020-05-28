#include<stdio.h>
struct node {
int data;
struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void insert();
void delete();
void display();

void main(){
int choice;
while(1){
    printf("1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n");
    printf("Enter your choice : \n");
scanf("%d",&choice);
switch(choice){
case 1:
    insert();
    break;
case 2:
    delete();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
default:
    printf("Invalid choice\n");
}
}
}
void insert(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
     printf("Enter value to be inserted\n");
     scanf("%d",&item);
      ptr->data=item;
    if(front==NULL && rear==NULL){
        front=rear=ptr;
        front->next=NULL;
        rear->next=NULL;
        printf("Inserted successfully\n");
    }
    else{
    ptr->next=NULL;
        rear->next=ptr;
        rear=ptr;
        printf("Inserted successfully\n");
    }

}

void delete(){
struct node *ptr;
    int item;
    if(front==NULL && rear==NULL){
        printf("Already Empty\n");
    }
    else{
    ptr=front;
    front=front->next;
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
