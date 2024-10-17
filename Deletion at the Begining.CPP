// Array Deletion at the Begining

#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i,array[10];
	cout<<"Enter Size of an Array: ";
	cin>>n;
	cout<<"Enter Element in an Array: ";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	n--;
	for(i=0;i<n;i++)
	{
		array[i]=array[i+1];
	}
	cout<<"After Deletion: ";
	for(i=0;i<n;i++)
	{
		cout<<array[i];
	}
	return 0;
}