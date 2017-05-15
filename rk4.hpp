#ifndef RK4_HPP
#define RK4_HPP

#include <bits/stdc++.h>

class rk4
{
public:
//	rk4();
//	~rk4();
	std::vector<double> p= std::vector<double>(2);
	std::vector<double> k = std::vector<double>(4);
	std::vector<double> m;
	std::vector<double> n;
	double function(double, double);
	std::vector<double> point(double, double, double);	
};


#endif // RK4_HPP

