#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;
double a,b,c,p,s;
int main ()
{  setlocale (LC_ALL, "rus");
  cout<<"Введите стороны треугольника\n";
  cin>>a>>b>>c;
  p = (a+b+c)/2;
  s = sqrt(p*(p-a)*(p-b)*(p-c));
  cout<<s;
  getch();
  return 0; 
}
