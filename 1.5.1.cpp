#include <iostream>
#include <conio.h>
using namespace std;
int a;
main()
{ setlocale (LC_ALL, "rus");
cout << "������� �����" <<endl;
cin >>a;
a>0 ? cout << "����� �������������":a<0?cout<< "����� �������������": cout<< "����� ����" ;
getch();
return 0;

}
