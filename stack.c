#include<stdio.h>
#include<stdlib.h>
void push(int arr[],int);
void pop(int arr[]);
void display(int arr[]);
int top=-1;
void main(){
    int choice,num,temp,n;
    printf("Enter capacity (size) of stack: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    while(1){
    printf("Select operation on stack\n");
    printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
    scanf("%d",&choice);
    switch(choice){
case 1:
    push(arr,n);
    break;
case 2:
    pop(arr);
    break;
case 3:
    display(arr);
    break;
case 4:
    exit(0);
    break;
default:
    printf("Incorrect choice");
    }
    }
}
void push(int arr[],int n){
    int num;
if(top==n-1){
    printf("Stack is FULL\n");
}
else{
    printf("Enter number you want to push into the stack: \n");
    scanf("%d",&num);
    top++;
    arr[top]=num;

}
}
void pop(int arr[]){
    int temp;
if (top==-1){
    printf("Stack is EMPTY\n");
}
else{
    temp=arr[top];
    top--;
    printf("Element popped out from the stack was %d\n",temp);

}
}
void display(int arr[]){
for(int i=0;i<=top;i++){
    printf("%d->",arr[i]);
}
printf("top\n");
}

