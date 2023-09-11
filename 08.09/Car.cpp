#include "Car.h"
#include<iostream>
using namespace std;


Car::Car()
{
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
	
	this->price = pr;
	this->year = y;
}

Car::~Car()
{
	delete[]this->model;
	delete[]this->color;
}

void Car::Input()
{
	char buff[100];
	cout << "Enter model :";
	cin >> buff;
	if (model != nullptr)
	{
	cout << "delete..." << model << "\n";
	delete[] model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);
	cout << "Enter color :";
	cin >> buff;
	if (color != nullptr)
	{
		cout << "delete..." << color << "\n";
		delete[] color;
	}
	color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff) + 1, buff);
	cout << "Enter year ::";
	cin >> year;
	cout << "Enter price ::";
	cin >> price;	
}

void Car::Print()
{
	cout << model <<"\t" << color <<"\t" << year << "\t" << price << endl;
}

char* Car::GetModel()
{
	return model;
}

char* Car::GetColor()
{
	return color;
}

int Car::GetYear()
{
	return 0;
}

double Car::GetPrice()
{
	return 0.0;
}

void Car::SetModel(const char* m)
{
	if (model != nullptr)
	{
		cout << model << "...deleted\n";
		delete[]model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
}

void Car::SetColor(const char* c)
{
	if (color != nullptr)
	{
		cout << color << "...deleted\n";
		delete[]color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

}

void Car::SetYear(int y)
{
	if (year != 0)
	{
		cout << year << "...deleted\n";
		year = 0;
		
	}
}

void Car::SetPrice(double pr)
{
	if (price != 0)
	{
		cout << price << "...deleted\n";
		price = 0;
	
	}
}
