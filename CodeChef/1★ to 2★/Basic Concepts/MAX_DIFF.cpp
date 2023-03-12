// toplamlarý hatýrlýyor. T1- T2
// T1+T2 = S
// 0 <= t1, t2 <= n

#include <iostream>

int main(void)
{
	
	
	int		T;
	int 	N;
	int		S;
	int		tmp;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N >> S;
		
		if ( N >= S)
			std::cout << S << std::endl;
		else if ( N < S)
		{
			tmp = S - N;
			if ( tmp <= N)
				std::cout << N - tmp << std::endl;
		}
	}
	return (0);				
}
