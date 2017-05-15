#ifndef ADAM_BASHFORTH_HPP
#define ADAM_BASHFORTH_HPP

class adamBashforth
{
public:
	//adamBashforth();
	//~adamBashforth();
	std::vector<double> abpointy; // vector for store y values
	std::vector<double> abpointx; // vector for store x values
	std::vector<double> a = std::vector<double>(2);
	std::vector<double> fAdamBashforth(double, double, double, double, double, double, double); // AdamBashforth	
};

#endif // ADAM_BASHFORTH_HPP
