#include <iostream>
#include <conio.h>
using namespace std;
int a;
main()
{ setlocale (LC_ALL, "rus");
cout << "Введите число" <<endl;
cin >>a;
a>0 ? cout << "Число положительное":a<0?cout<< "Число отрицательное": cout<< "Число ноль" ;
getch();
return 0;

}
