#include <iostream>

int main(void)
{
	int		T;
	int		A, B, C;
	int		arr[3];
	
	
	std::cin >> T;
	while (T--)
	{
		std::cin >> A >> B >> C;
		arr[0] = A + B;
		arr[1] = B + C;
		arr[2] = A + C;
		
		if (arr[0] >= arr[1] && arr[0] >= arr[2])
			std::cout << arr[0] << std::endl;
		else if (arr[1] > arr[0] && arr[1] >= arr[2])
			std::cout << arr[1] << std::endl;
		else if (arr[2] > arr[0] && arr[2] >= arr[1])
			std::cout << arr[2] << std::endl;	
	}
	return (0);
}
