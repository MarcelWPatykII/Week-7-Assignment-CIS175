// Hello_World.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string age;
	string degree;

	cout << "Please enter your Name: ";
	getline(cin, name);
	cout << "\n";

	cout << "Please enter your Age: ";
	getline(cin, age);
	cout << "\n";

	cout << "Please enter the Degree you are pursuing: ";
	getline(cin, degree);
	cout << "\n";

	cout << "Hello " << name + ", a student of " << age << " years of age who is pursuing a " << degree << " degree.\n";
	cout << "\n";

	return 0;
}


