#include <bits/stdc++.h>
#include "adamBashforth.hpp"

std::vector<double> adamBashforth::fAdamBashforth(double npoint, double step, double fn, double fn1, double fn2, double fn3, double x_n)
{
	for (int i = 0; i < npoint; ++i)
	{
		a[0] = fn + (step/24)*(55*fn - 59*fn1 + 37*fn2 - 9*fn3);
		a[1] = x_n + step;
		abpointy.push_back(a[0]);
		abpointx.push_back(a[1]);
		fn1 = fn;
		fn2 = fn1;
		fn3 = fn2;
		fn  = a[0];
		x_n = a[1];
	}

for (int j = 0; j < npoint; ++j)
{
	std::cout << abpointx[j] << "   " << abpointy[j] << "\n"; 
}

return abpointy;
}
