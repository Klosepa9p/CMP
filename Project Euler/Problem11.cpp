#include <iostream>


int main(void)
{
	
	int 	tab[20][20];
	int 	i;
	int 	j;
	int		product;
	
	for(unsigned int i = 0; i <= 19 ; i++) //taking array 
	{
		for (unsigned int j = 0; j <= 19; j++)
			std::cin >> tab[i][j];
	}
	
	product = 0;
	i = 0;
	while(i <= 19)
	{
		j = 0;
		while(j <= 19)
		{
			if (i <= 16 )
			{
				unsigned int tmp = tab[i][j] * tab[i+1][j] * tab[i+2][j] * tab[i+3][j];
				if (tmp > product)
					product = tmp;
			}
			if (j <= 16)
			{
				unsigned int tmp = tab[i][j] * tab[i][j+1] * tab[i][j+2] * tab[i][j+3];
				if (tmp > product)
					product = tmp;
			}
			if (i <= 16 && j <= 16)
			{
				unsigned int tmp = tmp = tab[i][j] * tab[i+1][j+1] * tab[i+2][j+2] * tab[i+3][j+3];
					if (tmp > product)
					product = tmp;
			}
			if ( i >= 3 && j <= 16)
			{
				unsigned int tmp = tab[i][j] * tab[i-1][j+1] * tab[i-2][j+2] * tab[i-3][j+3];
					if (tmp > product)
						product = tmp;
			}
			j++;
		}
		i++;
	}
	return (product);

	//70600674
