#include <iostream>

/*
int main(void)
{
	int		T;
	int		N;
	int		control;
		
	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		if (N % 2 == 1)
		{
			control = (N + 1) / 2;
			if (control % 2 == 0)
				std::cout << N << std::endl;
			else
				std::cout << N - 1 << std::endl;
		}
		else
		{
			control = N / 2;
			if (control % 2 == 0)
				std::cout << N << std::endl;
			else
				std::cout << N - 2 << std::endl;
		}
	}
	return (0);	
} */

#include <iostream>
int main(void)
{		
	int		T;
	int		N;
	int		sum;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		sum = (N * (N + 1) / 2);
		if (sum % 2 == 0)
			std::cout << N << std::endl;
		else
		{
			if (N % 2 == 0)
				std::cout << N - 2 << std::endl;
			else
				std::cout << N - 1 << std::endl;
		}	
	}
	return (0);
}
