#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ setlocale (LC_ALL, "rus");
char s;

while(true)
{

cout << "������� ������  "<<endl;
cin >> s;
cout <<endl;
if (int (s)>=65 && int (s)<=90) cout << "�� ����� ������� �����"<<endl;
else if (int (s)>=97 && int (s)<=122) cout << "�� ����� ��������� �����"<<endl;
else if (int (s)>=48 && int (s)<=57) cout << "�� ����� �����"<<endl;
else if (int (s)>=123 && int (s)<=127) cout << "�� ����� ����������� ������"<<endl;
else cout << "�� ����� ����������� ������"<<endl;
}
getch();
return 0;


}
