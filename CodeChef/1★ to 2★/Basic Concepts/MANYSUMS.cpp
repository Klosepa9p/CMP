#include <iostream>

int main(void)
{
	int		T;
	int		L, R;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> L >> R;
		std::cout << (2 * R) - (2 * L) + 1 << std::endl;
	}
	return (0);
}
