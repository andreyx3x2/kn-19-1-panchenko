#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int a,b,c,d,e,sum;
int main()
{
setlocale (LC_ALL, "rus");
cout << "Введiть оцiнки по п'яти предметам\n" ;
cin>>a>>b>>c>>d>>e;
sum = a+b+c+d+e;
if (sum >=300) {
cout <<"Перший подiл" ;
}
else if ((sum>=250) && (sum<=295)) {
cout <<"Другий подiл";
}
else if ((sum>=200) && (sum <=245)) {
cout<<"Третій подiл";
}
else {
cout <<"Невдача";
}
getch ();
return 0;
}



