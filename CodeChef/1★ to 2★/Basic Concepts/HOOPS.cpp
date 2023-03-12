#include <iostream>

int main(void)
{
	int		T,N;
	
	std::cin >> T;
	while(T--)
	{
		std::cin >> N;
		std::cout << (N / 2) + 1 << std::endl;
	}
	return (0);
}
