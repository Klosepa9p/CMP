#include <iostream>

int main(void)
{
	int		T;
	char 	id;
	
	std::cin >> T;
	while(T--)
	{
		std::cin >> id;
		if (id == 'B' || id == 'b')
			std::cout << "BattleShip" << std::endl;
		else if ( id == 'C' || id == 'c')
			std::cout << "Cruiser" << std::endl;
		else if (id == 'D' || id == 'd')
			std::cout << "Destroyer" << std::endl;
		else if (id == 'F' || id == 'f')
			std::cout << "Frigate" << std::endl;
	}
	return (0);
}
