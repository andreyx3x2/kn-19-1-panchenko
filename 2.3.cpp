#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int a,b,c,d,e,sum;
int main()
{
setlocale (LC_ALL, "rus");
cout << "����i�� ��i��� �� �'��� ���������\n" ;
cin>>a>>b>>c>>d>>e;
sum = a+b+c+d+e;
if (sum >=300) {
cout <<"������ ���i�" ;
}
else if ((sum>=250) && (sum<=295)) {
cout <<"������ ���i�";
}
else if ((sum>=200) && (sum <=245)) {
cout<<"����� ���i�";
}
else {
cout <<"�������";
}
getch ();
return 0;
}



