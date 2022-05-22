#include <iostream>
#include "fruit.h"
using namespace std;

void Swap(int& a, int& b)
{
	cout << "In Swap function" << &a << "  " << &b << endl;
	int temp = a;
	a = b;
	b = temp;
}


void main()
{
	cout << "Hello girls!!\n********" << endl ;
	int x, y;

	cout <<"In main function"<< &x <<"  "<< &y << endl;

	cin >> x >>y;

	Swap(x, y);

	cout << x <<","<< y<< endl;

	Fruit f;
	cout << f;
}