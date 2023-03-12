#include <iostream>

int main(void)
{
	
	int		T;
	int		x;
	
	
	std::cin >> T;
	while(T--)
	{
		std::cin >> x;
		if (x >= 1 && x < 100)
			std::cout << "Easy" << std::endl;
		else if (x >= 100 && x < 200)	
			std::cout << "Medium" << std::endl;
		else if (x >= 200 && x <= 300)
			std::cout << "Hard" << std::endl;
	}
	return (0);
}
