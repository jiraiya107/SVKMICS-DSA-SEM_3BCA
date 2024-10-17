#include<stdio.h>
#include<conio.h>
void push(int a[],int n);
void pop(int a[]);
void display(int a[]);
int a[10],n,temp,top=-1,choice;

void main()
{
	clrscr();
	printf("enter the limit of stack:- ");
	scanf("%d",&n);
	do
	{


		printf("\n1   push\n");
		printf("\n2    pop\n");
		printf("\n3   display\n");
		printf("\n4   Exit\n");
		printf("enter your choice:-");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(a,n);
				break;
			case 2:
				pop(a);
				break;
			case 3:
				display(a);
				break;
			case 4:
				exit(0);
			}
		}while(1);
		getch();
	}
void push(int a[],int n)
{
	int val;
	if(top==n-1)
	printf("over flow");
	else
	{
	top++;
	printf("%d",top);
	printf("enter elemate in stack:-");
	scanf("%d",&val);
	a[top]=val;
	}
}

void display(int a[])
{
		int i;
		for(i=0;i<=top;i++)
		printf("%d",a[i]);
}
void pop(int a[])
{
		if(top==-1)
		printf("under flow");
		else
		{
		temp=a[top];
		top--;
		}

}