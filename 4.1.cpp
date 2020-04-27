#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ setlocale (LC_ALL, "rus");
int a,b,i,res;

while(true)
{
	cout <<"Введите число\n";
cin>>a;
	if (a==2 || a==3 || a==5 || a==7) cout << "Число является простым\n";
 else 	if (a%2==0 || a%3==0 || a%5==0 || a%7==0) cout << "Число не является простым\n";
	 else cout << "Число является просытм\n";
}
	getch();
	return 0;
	
}
