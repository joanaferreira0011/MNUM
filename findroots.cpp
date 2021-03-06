// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;


float f(float x) //example function
{
	return x - 2 * log(x) - 5;
} 

float df(float x)
{
	return 1 - 2 * 1/x;
}

double bisection(double a, double b, double error)
{
	int i = 0; //number of iterations//number of iterations
	while (abs(a-b) > error)
	{
		double xn = (a + b) / 2.0;

		if (f(a)*f(xn) < 0)
			b = xn;
		else
			a = xn;

		i++;
	}

	cout << "Number iter: " << i << endl;
	return (a + b) / 2.0;
}

double regulafalsi(double a, double b, double error)
{
	int i = 0; //number of iterations

	while (abs(a - b) > error)
	{
		double xn = (a*f(b) - b * f(a)) / (f(b) - f(a));

		if (f(a)*f(xn) < 0)
			b = xn;
		else
			a = xn;
		i++;
	}
	cout << "Number iter: " << i << endl;
	return (a*f(b) - b * f(a)) / (f(b) - f(a));
}

double newton(double x, double error) //NEED TO FINISH
{
	//assuming xn as xn+1 and x as xn

	int i = 0; //number of iterations

	while (df(x) !=0 && abs(-f(x)/df(x)> error))
	{
		double xn = x- f(x)/df(x);

		if (f(a)*f(xn) < 0)
			b = xn;
		else
			a = xn;
		i++;
	}
	cout << "Number iter: " << i << endl;
	return x;
}


int main()
{
	cout << "Bisection: \n";
	cout << bisection(9, 10, 0.00001) << endl << endl;
	cout << "Regula falsi: \n";
	cout << regulafalsi(9,10, 0.00001) << endl;


	cout << "Bisection: \n";
	cout << bisection(0.001,0.1, 0.00001)<< endl <<endl; 
	cout << "Regula falsi: \n";
	cout << regulafalsi(0.001, 0.01, 0.00001) <<endl;
	return 0;

}
