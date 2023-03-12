#include <iostream>


int main(void)
{
	int		T;
	int		number;
	unsigned int counter;
	int tmp;
	
	std::cin >> T;
	while (T--)
	{	
		counter = 0;
		std::cin >> number;
		while(number > 0)
		{
			tmp = number % 10;
			if (tmp == 4)
				counter++;
			number /= 10;		
		}
		std::cout << counter << std::endl;
	}
}
