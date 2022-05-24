#define _CRT_SECURE_NO_WARNINGS
#include "Fruit.h"
#include <string.h>
#include <iostream>
using namespace std;


Fruit::Fruit(const char* name, Color color) : color(color), weight(0.50)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	/*for (int i = 0; i <= strlen(name); i++)
		this->name[i] = name[i];*/
	cout << "In Fruit::Fruit\n";
}

Fruit::Fruit(const char* name, Color color, float weight) :Fruit(name)
{
	this->color = color;
	this->weight = weight;
}

Fruit::Fruit(const Fruit& f) : Fruit(f.name, f.color, f.weight) {}


Fruit::Fruit() :Fruit("Ploni almoni"){}

const char* Fruit::getName()
{
	return name;
}

Color Fruit::getColor()
{
	return color;
}

float Fruit::getWeight()
{
	return weight;
}

void Fruit::setName(const char* name)
{
	if(this->name)
		delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}


void Fruit::setColor(Color color)
{
	this->color = color;
}
void Fruit::setWeight(float weight)
{
	this->weight = weight;
}

Fruit::~Fruit()
{
	cout << "In Fruit::~Fruit of "<<name<<endl;
	if (this->name)
		delete[] this->name;
}