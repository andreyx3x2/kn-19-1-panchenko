#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int sum =0;int  i;
int main()
{ setlocale (LC_ALL, "rus");
for (i=1; i<=10; i++)   
{
sum=sum+i;

}
cout <<"Сумма первых десяти натуральных чисел:   "<<sum;
getch();
return 0;
}
