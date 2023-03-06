
//Newton's 2nd LAW. The formule is V * V = U * U +- (2 * a * x)
// x -> instance
// a -> accleration
// V -> last velocity
// U -> First velocity
// if slow down " - " negative acc. else increase his velocity positive acc.

#include <iostream>

int main(void)
{
	int		T;
	int 	U, V, A, S;
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> U >> V >> A >> S;
		if (V * V >= U * U - (2 * A * S))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return (0);
}
