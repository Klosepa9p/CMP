#include <iostream>

int main(void)
{
	int		T;
	int 	A,B;
	int		X;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> A >> B;
		std::cin >> X;
		if ((B- A) / X > 0)
			std::cout << (B - A) / X << std::endl;	
	}
	return (0);
}
