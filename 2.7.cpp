#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int  a, b; 
int i;  int x=0; int y=0; int z=0;
int main()
{ setlocale (LC_ALL, "rus");
cout<<"������� ����������� ����� ����";
cin>>a;

for (i=1; i<=a; i++)
{
	cout<<"������� ����� "<<i<<"\n";
	cin>>b;
	 if (b<0)	 x++;
     else if (b==0)	 y++;
     	else    z++;
}
cout<<"������������� �����: "<<x<<"\n������� �����: "<<y<<" \n������������� �����: "<<z;
getch();
return 0;
	 }
							
