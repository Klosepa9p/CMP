#include <iostream>

int main(void)
{
	int		T;
	unsigned int 	A, B, C;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> A >> B >> C;
		if ( A + B + C == 180)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return (0);
}
