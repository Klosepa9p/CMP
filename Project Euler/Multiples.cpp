#include <stdlib.h>

int multiples()
{
	int		*arr;
	int 	i;
	int		c;
	long 	sum;
	
	i = 3;
	c = 0;
	arr = (int *)malloc(sizeof(int) * 1000);	
	if (!arr)
		return (0);
	while(i < 1000)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			arr[c] = i;
			c++;	
		}				
		i++;	
	}
	i = 0;
	sum = 0;
	while(arr[i])
	{
		sum += arr[i];
		i++;		
 	}
 	free(arr);
	return (sum);
}
