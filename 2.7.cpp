#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int  a, b; 
int i;  int x=0; int y=0; int z=0;
int main()
{ setlocale (LC_ALL, "rus");
cout<<"Введите колличество чисел ряда";
cin>>a;

for (i=1; i<=a; i++)
{
	cout<<"Введите число "<<i<<"\n";
	cin>>b;
	 if (b<0)	 x++;
     else if (b==0)	 y++;
     	else    z++;
}
cout<<"Отрицательных чисел: "<<x<<"\nНулевых чисел: "<<y<<" \nПоложительных чисел: "<<z;
getch();
return 0;
	 }
							
