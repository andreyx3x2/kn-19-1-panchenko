#include <iostream>
#include <conio.h>
using namespace std;
int a,b,c, sum;
int main()
{ setlocale (LC_ALL,"rus");                    
cout << "������� ��� ����\n";
cin >> a>>b>>c;
sum=a+b+c;
if (sum==180) cout << "����������� ����������";
else cout << "����� ���������� �� ����������";
getch();
return 0;


}
