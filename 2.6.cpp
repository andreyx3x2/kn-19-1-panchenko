#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int  i; int sum =0;
int main()
{ setlocale (LC_ALL, "rus");
cout<<"������� �����:  ";
cin>>i;
   while (i!=0)
   {
    sum=sum+i%10;
    i=i/10;

   }
cout<<"����� ���� �����:    "<<sum;

getch();
return 0;
}
