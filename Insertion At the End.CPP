// Array Insertion At the End

#include<iostream.h>
#include<conio.h>
int main()
{
	int array[5],i,values;
	clrscr();
	cout<<"Enter 5 Array Elemenmts:";
	for(i=0;i<5;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter Elements To Insert:";
	cin>>values;
	array[i]=values;
	cout<<"The New Array Is:\n";
	for(i=0;i<6;i++)
	{
		cout<<array[i];
	}
	return 0;
}