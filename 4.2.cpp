#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void zero_small(int &a, int &b)
{  
   if (a>b) b=0;  
   else a=0;
    

}
 int main ()
 
 { setlocale (LC_ALL, "rus");
  int a,b;
 cout<<"¬ведите два числа"<<endl;
 cin>>a>>b;
  zero_small(a,b);
  cout<<a<<"  "<<b;
 
 
 getch();
 return 0;
 }
