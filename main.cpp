#include <iostream>
#include <cmath>
#include "sum.h"
#include "dif.h"
#include "div.h"
#include "prod.h"
using namespace std;

int main()
{
	
	cout << "Hello" << endl;
	int a,b;
	cout << "Enter two numbers:\n";
	cin >> a >> b;
	char op;
	cout << "Enter the operation(+,-,*,/,^)->";
	cin>>op;
	switch(op)
	{
		case '+':
		cout << Sum(a,b) << endl; break;
		case '-':
		cout << Dif(a,b) << endl; break;
		case '*':
		cout << Prod(a,b) << endl; break;
		case '/':
		cout << Div(a,b) << endl; break;
		case '^':
		cout << Pow(a,b) << endl; break;
		default:
		cout << "Wrong choice! Try agein!"; break;
	}
}