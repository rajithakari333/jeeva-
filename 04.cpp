#include<iostream.h>
#include<conio.h>
void main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<ch<<" is an alphabet";
	}
	else
	{
		cout<<ch<<" is not an alphabet";
	}
	getch();
}
