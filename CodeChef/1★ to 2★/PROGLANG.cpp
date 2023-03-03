#include <iostream>

int main(void)
{

	int		T;
	int		arr[6];
	
	std::cin >> T;
	while (T--) // more costly than create 6 vars.! 
	{
		for(int i = 0; i <= 5; i++)
		{
			std::cin >> arr[i];
		}
		if ((arr[0] == arr[2] && arr[1] == arr[3]) || (arr[0] == arr[3]  && arr[1] == arr[2]))
			std::cout << 1 << std::endl;
		else if ((arr[0] == arr[4] && arr[1] == arr[5]) || (arr[0] == arr[5] && arr[1] == arr[4]))
			std::cout << 2 <<std::endl;
		else
			std::cout << 0 << std::endl;
	}
	return (0);
}
