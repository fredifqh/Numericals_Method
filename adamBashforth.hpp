#ifndef ADAM_BASHFORTH_HPP
#define ADAM_BASHFORTH_HPP

double function(double x, double y);
std::vector<double>  rk4(double, double, double);	
std::std::vector<double> adamBashforth(double, double, double, double);
#endif // ADAM_BASHFORTH_HPP
