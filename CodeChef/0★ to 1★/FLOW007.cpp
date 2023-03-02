#include <iostream>

int main(void)
{
	int		T;
	int 	N;
	int		tmp;
	
	std::cin >> T;
	while(T--)
	{
		std::cin >> N;
		tmp = 0;
		while (N > 0)
		{
			tmp *= 10;
			tmp += N % 10;
			N /= 10;
		}
		std::cout << tmp << std::endl;
}
		
		
	return (0);	
}	
