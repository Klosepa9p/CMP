#include <iostream>

int main(void)
{
	int		T;
	int		N;
	int 	f_tmp;
	int 	counter;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		counter = 0;
		while (N > 0 )
		{
			f_tmp = N % 10;
			if (f_tmp == 4)
				counter++;
			N /= 10;
		}
		std::cout << counter << std::endl;
	}
	return (0);
}
