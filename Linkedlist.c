/*single linked list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *head;
typedef  struct Node node;
void main()
{
void insertatfront(int ele);
void insertatrear(int ele);
void insertbypos(int pos,int ele);
void deleteatfront();
void deleteatrear();
void deletebypos(int pos);
void search(int key);
void count();
void display();
int ch,ele,key,pos;
while(1)
{
printf("1-insert at front\t");
printf("2- insert at end \t");
printf("3- insert by position \n");
printf("4-delete at front\t");
printf("5- delete at end \t");
printf("6- delete by position \n");
printf("7-search\t");
printf("8-count\t\t");
printf("9-display\t");
printf("10-exit\n");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter the element: ");
	    scanf("%d",&ele);
	    insertatfront(ele);
	    break;
case 2: printf("enter the element: ");
	    scanf("%d",&ele);
	    insertatrear(ele);
	    break;
case 3: printf("enter the element:");
	    scanf("%d",&ele);
	    printf("enter the position to  insert:");
	    scanf("%d",&pos);
	    insertbypos(pos,ele);
	    break;
case 4: deleteatfront();
	   break;
case 5: deleteatrear();
	   break;
case 6: printf("enter the position to  delete:");
	    scanf("%d",&pos);
	    deletebypos(pos);
	    break;
case 7: printf("enter the element to search:");
	    scanf("%d",&key);
	    search(key);
	    break;
case 8:count();
	    break;
case 9:display();
	    break;
case 10:exit(0);
	   break;
default: printf("you have entered wrong choice\n");
	break;
}
}
}

void insertatfront(int ele)
{
node *newNode;
newNode=(node *)malloc(sizeof(node));
newNode->data=ele;
newNode->next=NULL;
if(head==NULL)
{
head=newNode;
printf("Node Inserted\n");
}
else
{
newNode->next=head;
head=newNode;
printf("Node Inserted\n");
}
}
void insertatrear(int ele)
{
node *newNode,*temp;
newNode=(node *)malloc(sizeof(node));
newNode->data=ele;
newNode->next=NULL;
if(head==NULL)
{
head=newNode;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp= temp->next;
}
temp->next= newNode;
}
printf("Node Inserted\n");
}

void insertbypos(int pos,int ele)
{
int i;
node *newNode,*temp;
temp=head;
newNode=(node *)malloc(sizeof(node));
newNode->data=ele;
for(i=0;i<(pos-2);i++)
{
temp=temp->next;
}
if(pos==1)
{
newNode->next=head;
head=newNode;
}
else
{
newNode->next=temp->next;
temp->next=newNode;
}
printf("Node Inserted\n");
}

void deleteatfront()
{
node *temp;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else
{
temp=head;
head=head->next;
temp->next=NULL;
free(temp);
printf("Node Deleted\n");
}
}
void deleteatrear()
{
node *temp1,*temp2;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else if(head->next==NULL)
{
head=NULL;
free(head);
}
else
{
temp1=head;
while(temp1->next!=NULL)
{
temp2=temp1;
temp1=temp1->next;
}
temp2->next=NULL;
free(temp1);
}
printf("Node Deleted\n");
}

void deletebypos(int pos)
{
int i;
node *temp1,*temp2;
temp1=head;
for(i=0;i<=(pos-2);i++)
{
temp2=temp1;
temp1=temp1->next;
}
if(pos==1)
{
head=head->next;
free(temp1);
return;
}
else
{
temp2->next=temp1->next;
free(temp1);
}
printf("Node Deleted\n");
}

void search(int key)
{
node *temp;
int pos=1;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else
{
temp=head;
while((temp->next!=NULL)&&(temp->data!=key))
{
pos++;
temp=temp->next;
}
if(temp->data==key)
printf("\nsearch element is found at location:%d\n",pos);
else
printf("\nsearch element is not found\n");
}
}

void count()
{
node *temp;
int count = 1;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else
{
  temp = head;
  while (temp->next != NULL)
{
count++;
temp=temp->next;
  }
  printf("\nNo Of Items In Linked List : %d\n", count);
  }
}
void display()
{
node *temp;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else
{
printf("\n single linked list elements are:");
temp=head;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
}

