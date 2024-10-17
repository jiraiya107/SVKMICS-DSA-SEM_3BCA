// Sorting

#include<iostream.h>
#include<conio.h>
int main()
{
	int temp,size,array[100],i,j;
	clrscr();
	cout<<"Enter The Size: ";
	cin>>size;
	cout<<"Enter The Numbers: ";
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	cout<<"Sorted Array: ";
	for(i=0;i<size;i++)
	{
		cout<<endl<<array[i];
	}
	return 0;
}