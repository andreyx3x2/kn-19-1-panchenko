#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
float a,b,c,d,D,x1,x2;
int main()
{ setlocale(LC_ALL, "rus");
cout << "ax2 + bx + c=0\n";
cout << "Введите a,b,c\n";
cin>>a>>b>>c;
d=b*b-4*a*c;
D=sqrt(d);
x1=-b+D;
x2=-b-D;
if (d<0) {cout<<"Корней не существует";}
else {cout<<"Корень 1: "<<x1<<"\nКорень 2:  "<<x2;}
getch();
return 0;

}
