#include <iostream>

int main(void)
{
	
	int		T;
	int 	N;
	int		sum;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		sum = (N * (N + 1)) / 2;
		if (sum % 2 == 0)
			std::cout << N << std::endl;
		else
			std::cout << N - 1 << std::endl;
	}
	return (0);
}
