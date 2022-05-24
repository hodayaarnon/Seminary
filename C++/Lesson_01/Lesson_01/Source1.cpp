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
	/*
	cout << "Hello girls!!\n********" << endl ;
	int x, y;

	cout <<"In main function"<< &x <<"  "<< &y << endl;

	cin >> x >>y;

	Swap(x, y);

	cout << x <<","<< y<< endl;
	*/
	/**/
	Fruit f("Apple",GREEN,0.10);
	//Fruit f;
	cout << &f<<endl;
	//cout << f.getWeight();
	cout << f.getName() << "  " << f.getColor() <<"  " << f.getWeight();
	cout << "*********\n";
	//cout << f;

	{
		cout << "start block\n";
		Fruit f2=f;
		f2.setName("Orange");
		cout << "end block\n";
	}


	Fruit* f2 = new Fruit("Banana");
	delete f2;
}