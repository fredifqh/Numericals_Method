#include <bits/stdc++.h>
#include "adamBashforth.hpp"


std::vector<double> m;
std::vector<double> k(4);
double px, py;

double function(double x, double y) 
{
	return y - pow(x,2) + 1;
}

// Defining rk4 method to generate the three first point which are necessary to Adam Bashforth method

std::vector<double> rk4(double h, double x_initCondition, double y_initCondition)
{
	for (int i = 0; i < 3; ++i)
	{	
		k[0] = function(x_initCondition, y_initCondition);
		k[1] = function(x_initCondition + (0.5)*h, y_initCondition + (0.5)*h*k[0]); 
		k[2] = function(x_initCondition + (0.5)*h, y_initCondition + (0.5)*h*k[1]);
		k[3] = function(x_initCondition + h, y_initCondition + h*k[2]);

		py = y_initCondition + (1./6)*(k[0] + 2*(k[1] + k[2]) + k[3])*h;
		px += h;

		m.push_back(py);

		y_initCondition = py;
		x_initCondition = px;
	}
return m;
}

// Defining adam-bashforth function

std::vector<double> fAdamBashforth(double npoint, double h, double xn0, double xn1, double xn2, double xn3, double fn0, double fn1, double fn2, double fn3)
{
	for (int i = 0; i < npoint; ++i)
	{
		fn4 = fn3 + (step/24)*(55*function(xn3, fn3)- 59*function(xn2, fn2) + 37*function(xn1, fn1) - 9*function(xn0, fn0));
		
		abpointy.push_back(fn4);

		fn4 = fn3;
		fn3 = fn2;
		fn2 = fn1;
		fn1 = fn;
		xn3 = xn3 + h;
		xn2 = xn2 + h;
		xn2 = xn1 + h;
		xn0 = xn0 + h;
	}

return abpointy;
}
