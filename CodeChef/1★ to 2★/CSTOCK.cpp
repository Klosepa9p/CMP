#include <iostream>

int main(void)
{
	int		T;
	int		S;
	int		A, B;
	int		C;
	
	double d_S;
	std::cin >> T;
	while (T--)
	{
		std::cin >> S >> A >> B >> C;
		d_S = (double)S; // static_cast<double>S;
		d_S = d_S + d_S * C / 100;
		if (d_S >= A && d_S <= B)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return (0);
}
