/*#include<stdio.h>
#include<conio.h>
#define SIZE 10

void push(int);
void pop();
void display();
int stack[SIZE], top = -1;
void main() {
 int value, choice;
 clrscr();
 while(1){
 printf("\n\n***** MENU *****\n");
 printf("1. Push\n2. Pop\n3. Display\n4. Exit");
 printf("\nEnter your choice: ");
 scanf("%d",&choice);
 switch(choice){
 case 1: printf("Enter the value to be insert: ");
 scanf("%d",&value);
 push(value);
 break;
 case 2: pop();
 break;
 case 3: display();
 break;
 //case 4:exit(0);
 default: printf("\nWrong selection!!! Try again!!!");
 }
 } }
void push(int value){
 if(top == SIZE-1)
 printf("\nStack is Full!!! Insertion is not possible!!!");
 else{
 top++;
 stack[top] = value;
 printf("\nInsertion success!!!");
 } }
void pop(){
 if(top == -1)
 printf("\nStack is Empty!!! Deletion is not possible!!!");
 else{
 printf("\nDeleted : %d", stack[top]);
 top--;
 } }
void display(){
 if(top == -1)
 printf("\nStack is Empty!!!");
 else{
 int i;
 printf("\nStack elements are:\n");
 for(i=top; i>=0; i--)

 printf("%d\n",stack[i]);
 }
}

#include<stdio.h>
#include<conio.h>
struct Node
{
 int data;
 struct Node *next;
}*top = NULL;
void push(int);
void pop();
void display();
void main()
{
 int choice, value;
 clrscr();
 printf("\n:: Stack using Linked List ::\n");
 while(1){
 printf("\n****** MENU ******\n");
 printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
 printf("Enter your choice: ");
 scanf("%d",&choice);
 switch(choice){
 case 1: printf("Enter the value to be insert: ");
 scanf("%d", &value);
 push(value);
 break;
 case 2: pop(); break;
 case 3: display(); break;
 case 4: exit(0);
 default: printf("\nWrong selection!!! Please try again!!!\n");
 }
 }
}
void push(int value)
{
 struct Node *newNode;
 newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = value;
 if(top == NULL)
 newNode->next = NULL;
 else
 newNode->next = top;
 top = newNode;

 printf("\nInsertion is Success!!!\n");
}
void pop()
{
 if(top == NULL)
 printf("\nStack is Empty!!!\n");
 else{
 struct Node *temp = top;
 printf("\nDeleted element: %d", temp->data);
 top = temp->next;
 free(temp);
 }
}
void display()
{
 if(top == NULL)
 printf("\nStack is Empty!!!\n");
 else{
 struct Node *temp = top;
 while(temp->next != NULL){
 printf("%d--->",temp->data);
 temp = temp -> next;
 }
 printf("%d--->NULL",temp->data);
 }
} */
#include<stdio.h>
#include<conio.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE], front = -1, rear = -1;
void main()
{
 int value, choice;
 clrscr();
 while(1){
 printf("\n\n***** MENU *****\n");
 printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
 printf("\nEnter your choice: ");
 scanf("%d",&choice);
 switch(choice){
 case 1: printf("Enter the value to be insert: ");
 scanf("%d",&value);
 enQueue(value);
 break;
 case 2: deQueue();
 break;
 case 3: display();
 break;
 case 4: exit(0);
 default: printf("\nWrong selection!!! Try again!!!");
 }
 }
}
void enQueue(int value){
 if(rear == SIZE-1)
 printf("\nQueue is Full!!! Insertion is not possible!!!");
 else{
 if(front == -1)
 front = 0;
 rear++;
 queue[rear] = value;
 printf("\nInsertion success!!!");
 }
}
void deQueue(){
 if(front == rear)
 printf("\nQueue is Empty!!! Deletion is not possible!!!");

 else{
 printf("\nDeleted : %d", queue[front]);
 front++;
 if(front == rear)
 front = rear = -1;
 }
}
void display(){
 if(rear == -1)
 printf("\nQueue is Empty!!!");
 else{
 int i;
 printf("\nQueue elements are:\n");
 for(i=front; i<=rear; i++)
 printf("%d\t",queue[i]);
 }
}
