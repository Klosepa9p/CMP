#include <iostream>

int main(void)
{
	int		T;
	int		N;
	int		total;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		total = 0;
		while ( N > 0)
		{
			total += N % 10;
			N /= 10;	
		}
		std::cout << total << std::endl;
	}
	return (0);
}
