#include <iostream>

int main(void)
{
	int		T;
	int		N;
	int		X;
	int		S, R;
	int 	tmp_max;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> N >> X;
		tmp_max = 0;
		while (N--)
		{
			std::cin >> S >> R;
			if (X >= S && tmp_max <= R)
			{
				tmp_max = R;
			}
		}
		std::cout << tmp_max << std::endl;
	}
	return (0);
}
