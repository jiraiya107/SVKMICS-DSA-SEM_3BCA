// Array Insertion At Specific Location

#include<iostream.h>
#include<conio.h>
int main()
{
	int array[10],pos,size,val,i;
	clrscr();
	cout<<"Enter Size Of The Array:";
	cin>>size;
	cout<<"Enter"<<size<<"Element :";
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter The Insertion Location:";
	cin>>pos;
	cout<<"Enter The Value To Insert:";
	cin>>val;
	for(i=size-1;i>=pos-1;i--)
	{
		array[i+1]=array[i];
	}
	array[pos-1]=val;
	cout<<"Resultant Array Is:\n";
	for(i=0;i<=size;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}