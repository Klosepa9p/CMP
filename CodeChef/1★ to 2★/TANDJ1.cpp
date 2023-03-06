#include <iostream>


int 	ABS(int number)
{
	if (number < 0)
		number = -number;
	return (number);
}


int main(void)
{
	int		T;
	int 	a, b;
	int 	c, d;
	int		K;
	int distance;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> a >> b >> c >> d >> K;
		distance = ABS(a-c) + ABS(d-b);
		if (distance > K)
			std::cout << "NO" << std::endl;
		else if (distance == K)
			std::cout << "YES" << std::endl;
		else
		{
			if ((K - distance) % 2 == 0)
				std::cout << "YES"<< std::endl;
			else
				std::cout << "NO" << std::endl;			
		}
	}
	return (0);
}
