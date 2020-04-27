#include <iostream>
#include <conio.h>
using namespace std;
int a,m,y,d;
int main ()
{ setlocale (LC_ALL, "rus");
cout<<"Введите число дней";
cin>> a;
y = a/365;
m = (a-y*365)/31;
d = a-y*365-m*31;
cout <<y<<" лет "<<m<<" месяцев "<<d<<" дней ";
getch();
return 0;
}
