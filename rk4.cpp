#include <bits/stdc++.h>
#include "rk4.hpp"

double rk4::rk4Function(double x, double y)
{
	return -2*y + x + 4;
}

std::vector<double> rk4::point(double contador, double h, double x_initCondition, double y_initCondition)
{
	for (int i = 0; i < contador; ++i)
	{	
		k[0] = rk4Function(x_initCondition, y_initCondition);
		k[1] = rk4Function(x_initCondition + (0.5)*h, y_initCondition + (0.5)*h*k[0]); 
		k[2] = rk4Function(x_initCondition + (0.5)*h, y_initCondition + (0.5)*h*k[1]);
		k[3] = rk4Function(x_initCondition + h, y_initCondition + h*k[2]);

		p[0] = y_initCondition + (1./6)*(k[0] + 2*(k[1] + k[2]) + k[3])*h;
		p[1] = x_initCondition + h;

		m.push_back(p[0]);
		n.push_back(p[1]);

		y_initCondition = p[0];
		x_initCondition = p[1];
	}

for (int j = 0; j < contador; ++j)
{
	std::cout << m[j] << "   " << n[j] << "\n"; 
}

return m;
}