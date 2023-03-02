#include <iostream>

int main(void)
{
	int		T;
	int		A;
	int		B;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> A >> B;
		std::cout << A % B << std::endl;
	}
	return (0);
}
