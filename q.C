#include<stdio.h>                                                                //
#include<conio.h>

int a[20],front=-1,rear=-1,n;
void insert(int a[],int n);
void display(int a[],int n);
void deleteq(int a[],int n);
void main()
{
	int choice;
	clrscr();
	printf("Enter the size of Queue:-");
	scanf("%d",&n);
	do
	{
	printf("1  insert\n");
	printf("2  display\n");
	printf("3  exit\n");
	printf("4  delete\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		insert(a,n);
		break;
		case 2:
		display(a,n);
		break;

		case 3:
		exit();
		case 4:
		deleteq(a,n);
		break;
	}
	}while(1);
}
void insert(int a[],int n)
{
	if((front==-1 && rear==n-1)|| front==rear+1)
	{
		printf("Queue id full,overflow");
	}
	else
	{
		rear=rear+1;
		printf("Enter the value in queue:-");
		scanf("%d",&a[rear]);
	}

}
void display(int a[],int n)
{
	int i;
	if(front==-1)
	{
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	}
	else
	{
		for(i=front;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
void deleteq(int a[],int n)
{
	int temp;
	if(front==n+1)
	{
		printf("Queue is empty");
		front=-1;
		rear=-1;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		temp=a[front];
		printf("Delected value =%d\n",temp);
		front=front+1;

	}
}

















