#include <iostream>
#include <conio.h>
using namespace std;
int a,b,c, sum;
int main()
{ setlocale (LC_ALL,"rus");                    
cout << "Введите три угла\n";
cin >> a>>b>>c;
sum=a+b+c;
if (sum==180) cout << "Треугольник существует";
else cout << "Такой треуголник не существует";
getch();
return 0;


}
