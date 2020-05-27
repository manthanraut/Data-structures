#include<stdio.h>
void enqueue();
void dequeue();
void display();
int arr[10],front=-1,rear=-1,n=10;
void main(){
    int choice;
    while(1){
    printf("Enter your choice\n");
    printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
    scanf("%d",&choice);
    switch(choice){
case 1:
    enqueue();
    break;
case 2:
    dequeue();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
    break;
default:
    printf("Invalid choice");
    }
    }
}
void enqueue(){
    //insertion from rear
    int value;
if(rear==n){
    printf("Queue is full\n");
}
else{
    if(front==-1 && rear==-1){
        printf("Enter value to be inserted \n");
scanf("%d",&value);
    front=rear=0;
    arr[rear]=value;
    rear++;
    printf("Value inserted successfully\n");
    }
    else{
        printf("Enter value to be inserted \n");
scanf("%d",&value);
    arr[rear]=value;
    rear++;
    printf("Value inserted successfully\n");
}
}
}
void dequeue(){
    //deletion from front
    int temp;
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
            if(front==rear){
                temp=arr[front];
                front=rear=-1;
                printf("Value %d deleted successfully\n",temp);
            }
            else{
        temp=arr[front];
        front++;
        printf("Value %d deleted successfully\n",temp);
    }
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else{
            printf("front-->");
        for(int i=front;i<rear;i++){
            printf("%d-->",arr[i]);
        }
        printf("rear\n");
    }
}
