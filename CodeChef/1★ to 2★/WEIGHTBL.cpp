#include <iostream>

int main(void)
{
	int		T;
	int		w1, w2;
	int		x1, x2;
	int 	M;
	int		diff_w;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> w1 >> w2 >> x1 >> x2 >> M;
		diff_w = w2 - w1;
		if (diff_w >= M * x1 && diff_w <= M * x2)
			std::cout << 1 << std::endl;
		else
			std::cout << 0 << std::endl;
	}
	return (0);	
}
