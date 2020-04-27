#include <iostream>
#include <conio.h>
using namespace std;
void showChoice()
{
	setlocale(LC_ALL, "rus");
	cout <<"Выберите операцию"<<endl;
	cout <<"+"<<endl;
	cout <<"-"<<endl;
	cout <<"*"<<endl;
	cout <<"/"<<endl;	
} 
  float add(float a, float b) 
  {
  	return a+b;  	
  }
  
  float substruct(float a,float b) 
  {
  	return a-b;  	
  }
  
  float multiply(float a, float b) 
  {
  	return a*b;  	
  }
  
  float divide(float a, float b) 
  {
  	return a/b;  	
  }
   
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b;
	char s;
	while(true)
	{
	cout<<"Введите 1 число: "<<endl;
	cin>>a;
	cout<<"Введите 2 число: "<<endl;
	cin>>b;
	showChoice();
	cout<<endl;
	char s;
	cin>>s;
	cout<<endl;
	
	switch(s)
		{
		case '+' :  cout<<"Результат: "<<add(a,b)<< endl; 
			break;
		case '-' :  cout<<"Результат: "<<substruct(a,b)<< endl; 
			break;
		case '*' :  cout<<"Результат: "<<multiply(a,b)<< endl; 
			break;
		case '/' :  cout<<"Результат: "<<divide(a,b)<< endl; 
			break;
		defoult: cout<<"Недопуcтимое значение" << endl; 
		break;
		}
	cout<<endl;
    }

	return 0;
	
}
