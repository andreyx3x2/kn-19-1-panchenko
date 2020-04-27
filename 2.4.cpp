#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ setlocale (LC_ALL, "rus");
char s;

while(true)
{

cout << "Введите символ  "<<endl;
cin >> s;
cout <<endl;
if (int (s)>=65 && int (s)<=90) cout << "Вы ввели большую букву"<<endl;
else if (int (s)>=97 && int (s)<=122) cout << "Вы ввели маленькую букву"<<endl;
else if (int (s)>=48 && int (s)<=57) cout << "Вы ввели цифру"<<endl;
else if (int (s)>=123 && int (s)<=127) cout << "Вы ввели специальный символ"<<endl;
else cout << "Вы ввели специальный символ"<<endl;
}
getch();
return 0;


}
