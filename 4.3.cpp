#include <iostream>
#include <conio.h>
using namespace std;
void showChoice ()
{ setlocale (LC_ALL, "rus");
cout<<"Выберите операцию:\n +\n -\n *\n /\n";	
}
 double add (double a, double b)
{ 
return a+b;
}
  double substruct (double a,double b)
  {
  	return a-b;
  }
  double multiply (double a, double b)
  { 
    return a*b;
  }
  double divide (double a,double b)
  {
  return a/b;	
  }
   int main ()
  { setlocale (LC_ALL, "rus");
  double a,b;
    cout<<"Введите два числа";
    cin>>a>>b;
    char s;
    
    showChoice ();
    cin>>s;
    if (s=='+') cout<<add(a,b);
    else if (s=='-') cout<<substruct (a,b);
    else if (s=='*') cout<<multiply (a,b);
    else if (s=='/')cout<<divide (a,b);
    else cout<<"Ошибка";
    getch();
    return 0;
  }
