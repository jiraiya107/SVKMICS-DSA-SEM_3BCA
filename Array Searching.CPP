// Array Searching

#include<iostream.h>
#include<conio.h>
int main()
{
	int a[5],s,i,flag=0;
	clrscr();
	cout<<"Enter 5 Numbers:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Enter Number You Want To Search:";
	cin>>s;
	for(i=0;i<5;i++)
	{
		if(a[i]==5)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Found";
	}
	else
	{
		cout<<"Not Found";
	}
	return 0;
}