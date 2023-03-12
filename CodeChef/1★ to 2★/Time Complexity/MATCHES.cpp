#include <iostream>

int main(void)
{
	int		T;
	int		number1;
	int		number2;
	int 	sum;
	int		digit;
	int 	matches_sum;
	
	std::cin >> T;
	while(T--)
	{
		std::cin >> number1 >> number2;
		sum = number1 + number2;
		matches_sum = 0;
		while(sum > 0)
		{
			digit = sum % 10;
			if ( digit == 9 || digit == 0 || digit == 6)
				matches_sum += 6; 
			else if (digit == 2 ||digit == 3 ||digit == 5)
				matches_sum += 5;
			else if (digit == 4)
				matches_sum += 4;
			else if (digit == 1)
				matches_sum += 2;
			else if (digit == 7)
				matches_sum += 3;
			else if (digit == 8)
				matches_sum += 7;
			sum /= 10;
		}
			std::cout << matches_sum << std::endl;		
		}
	}
