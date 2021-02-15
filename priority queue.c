#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct node{

int pri ;

int data;

struct node *next;

}NODE;

NODE *front=NULL;

void insert(int data,int pri)
{
NODE *temp,*q;
temp=(NODE *)malloc (sizeof(NODE));
temp->data=data;
temp->pri=pri;

if(front==NULL || pri < front->pri)
{
temp->next =front;
front = temp;
}
else{
q= front;
while(q->next != NULL && q->next->pri <= pri)\
q=q->next;
temp->next= q->next;
q->next =temp;
}}

void del(){
NODE *temp;
if(front == NULL)
printf("Queue is empty :");
else
{
temp=front;
printf("Deleted data is :%d",temp->data);
front = front -> next;
free(temp);
}
}

void display(){

NODE *temp;
temp=front;
if(front == NULL)
printf("Queue is empty:");
else
{
printf("\nOur priority queue is:");
printf("Priority Data\n");
while(temp != NULL)
{
printf("%5d %5d\n",temp->pri,temp->data);
//temp->temp->next;
}
}
}

int main()
{
int ch,data,pri;
do{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter choice\n");
scanf("%d \n”,&ch");
switch(ch)
{
case 1:
printf("Enter the data:\n");
scanf("%d,&data");
printf("Enter priority:");
scanf("%d”,&pri");
insert(data,pri);

break;

case 2:

del();

break;

case 3:

display();

break;

case 4:

break;

default:

printf("Wrong choice");

break;
}
}while(ch!=4);
return 0;
}
