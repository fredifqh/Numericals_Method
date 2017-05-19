#include <bits/stdc++.h>

std::vector<double> m;
std::vector<double> k(4);
double px, py;

double function(double x, double y) 
{
	return y - pow(x,2) + 1;
}

std::vector<double> rk4(double npoint, double h, double x_initCondition, double y_initCondition)
{
	for (int i = 0; i < npoint; ++i)
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