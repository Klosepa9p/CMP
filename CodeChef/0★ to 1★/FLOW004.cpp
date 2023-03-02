#include <iostream>

int main(void)
{
	int		T;
	int		N;
	int 	tmp;
	
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		tmp = N % 10;
		while (N > 9)
		{
			N /= 10;
		}
		tmp += N;
		std::cout << tmp << std::endl;
	}
	return (0);
}
