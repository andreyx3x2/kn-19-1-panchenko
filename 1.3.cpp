#include <iostream>
#include <conio.h>
using namespace std;
float cel,fahr;
int main()
{setlocale(LC_ALL, "rus");
cout <<"Введите температуру в цельсиях: ";
cin >> cel;
fahr = cel*1.8+32;
cout <<"Температура в фарингейтах:  "<<fahr;
getch();
return 0;
}
