#include <bits/stdc++.h>
#include "rk4.hpp"

using namespace std;

double x = 0;

int main(int argc, char const *argv[])
{
	const double h = 0.1;
	string execname = argv[0];
	double x_ini = atof(argv[1]);
	double y_ini = atof(argv[2]); 
	double npoint = atof(argv[3]);

	std::vector<double> m = rk4(npoint, h, x_ini, y_ini);
	for(auto v : m)
	{
		x += h;
		cout << setprecision(10) << x << "  " <<  v << "\n";
	}

return 0;
}
