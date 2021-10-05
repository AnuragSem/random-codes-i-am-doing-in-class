#include<stdio.h>
#define MAX 50

void enqueue(int *a,int n,int *f,int *r)
{
if((*r)==n-1)
{
printf(" QUEUE IS FULL\n");
}
else
{
(*r)++;
if((*r)==0)
{
(*f)==0;
}
printf("enter the element in the queue\n");
scanf("%d",&a[*r]);
}
}

void dequeue(int *a,int n,int *f,int *r)
{
    if(*r==-1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        printf("element %d is being removed",a[*f]);
        
        
    }
}

void display(int *a,int n,int *f,int *r)
{
if(*f==-1)
{
printf("QUEUE IS EMPTY\n");
}

for(int i= *f;i <= *r;i++)
{
printf("%d\n",a[i]);
}
}
int main(void)
{
int arr[MAX];
int n,front, rear,option;
front=rear=-1;
printf("ENTER THE NUMBER IN QUEUE\n");
scanf("%d",&n);
while(1)
{
printf("\nenter your choice\n 1 insert\n2 delete\n3 display\n");
scanf("%d",&option);
switch(option)
{
case 1 : enqueue(arr,n,&front,&rear);
			break;
case 2 : dequeue(arr,n,&front,&rear)
         break;
case 3 : display(arr,n,&front,&rear);
			break;
}
}
}
