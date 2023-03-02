#include <iostream>

int main(void)
{
	int		T;
	int 	A;
	int 	B;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> A >> B;
		if (A > B)
			std::cout<< ">" << std::endl;
		else if (B > A)
			std::cout<< "<" << std::endl;
		else
			std::cout<< "=" << std::endl;
	}
	return (0);
}
