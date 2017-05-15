#include <bits/stdc++.h>
#include "rk4.hpp"
#include "adamBashforth.hpp"
using namespace std;

const double h = 0.1;
const double x_ini = 0;
const double y_ini = 1; 
const double npoint = 10; 

int main(int argc, char const *argv[])
{
	rk4 rk4;
	adamBashforth adamBashforth;
	std::vector<double> v = rk4.point(h, x_ini, y_ini);
	std::vector<double> ad = adamBashforth.fAdamBashforth(npoint, h, v[2], v[1], v[0], y_ini, x_ini);
	//std::copy(begin(v), end(v), std::ostream_iterator<double>(std::cout, "\n"));
	//cout << v[0] << "   " << v[1] << "   "<< v[2] << "\n";
	return 0;
}