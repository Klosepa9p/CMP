#include <iostream>

int main(void)
{
	int		T;
	int		N;
	int 	K;
	
	int number;
	std::cin >> T;
	while (T--)
	{
		std::cin >> N >> K;
		if (N >= K && K)
			N %= K;
		std::cout << N << std::endl;
	}
	return (0);
}

// K cant be 0VALUE ZERODIVISIONERROR!
