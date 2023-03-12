//  L günden az R günden fazla yapamaz bir sonraki dozu
// determine if taken dose is too early , or too late , or in the correct range.

#include <iostream>

int main(void)
{
	int		T;
	int		D, L, R;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> R >> L >> D;
		if (L > R )
			std::cout << "Too Early" << std::endl;
		else if (D < R)
			std::cout << "Too Late" << std::endl;
		else
			std::cout << "Take second dose now" << std::endl;
	}
	return (0);
}
