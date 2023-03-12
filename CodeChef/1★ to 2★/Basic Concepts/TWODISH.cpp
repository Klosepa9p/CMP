#include <unistd.h>
#include <iostream>

int main(void)
{
	int		T;
	int		N;
	int		A, B, C;
	int		tmp;
	
	std::cin >> T;
	while (T--)
	{
		tmp = 0;
		std::cin >> N;
		std::cin >> A >> B >> C;
		if ( B >= A || B >= C)
		{
			if (C >= A)
			{
				tmp += C;
				B -= tmp;
				C = 0;
			}				
			else 
			{
				tmp += A;
				B -= tmp;
				A = 0;
			}
		}
		if (A && B)
			if ( B >= A)
				tmp += A;
			else
				tmp += B;
		if (C && B)
			if (B >= C)
				tmp += C;
			else
				tmp += B;
		if (tmp >= N)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}
	
	

	

