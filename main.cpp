#include <bits/stdc++.h>
#include "rk4.hpp"

using namespace std;

const double h = 0.2;
const double x_ini = 0;
const double y_ini = 1; 
const double contador = 100; 

int main(int argc, char const *argv[])
{
	rk4 rk4;
	std::vector<double> v = rk4.point(contador, h, x_ini, y_ini);
	//std::copy(begin(v), end(v), std::ostream_iterator<double>(std::cout, "\n"));
	//cout << v[0] << "   " << v[1] << "   "<< v[2] << "\n";
	return 0;
}