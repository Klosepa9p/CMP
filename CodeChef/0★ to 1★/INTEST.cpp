#include <iostream>

int main(void)
{
	int		N;
	int		K;
	int		A;
	int 	counter;
	
	counter = 0;
	std::cin >> N >> K;
	while (N--)
	{
		std::cin >> A;
		(A % K == 0) ? (counter++) : (counter);
	}
	std::cout << counter;
	return (0);
}
