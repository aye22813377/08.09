#include<iostream>
#include "Car.h"
using namespace std;

int main()
{	Car a("Audi A5","Red",2021,24000);
	
	char* model = a.GetModel();
	char* color = a.GetColor();
	a.Input();
	a.Print();

	
}