#include <bits/stdc++.h>
#include "rk4.hpp"

using namespace std;

double x = 0;

int main(int argc, char const *argv[])
{
	
	string execname = argv[0];
	double x_ini = atof(argv[1]); // Initial condition x
	double y_ini = atof(argv[2]); // Initial condition y
	double npoint = atof(argv[3]);// Number of point using rk4 method
	double h = atof(argv[4]);     // Step size

	std::vector<double> m = rk4(npoint, h, x_ini, y_ini); // calling rk4 method
	for(auto v : m)
	{
		x += h;
		cout << setprecision(10) << x << "  " <<  v << "\n";
	}

return 0;
}
